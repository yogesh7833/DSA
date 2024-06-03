#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node(int data){
    this->data=data;
    this->next=NULL;
   }
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
Node* getMiddele(Node* &head){
    if(head==NULL){
        cout<<"LL is Empty"<<endl;
        return head;
    }
    if(head->next==NULL){
        //only one node is LL
        return head;
    }
    //ll have greater than one node
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
int main(){
    // Node* head=NULL;
    // Node* tail=NULL;
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* four=new Node(40);
    Node* five=new Node(50);
    Node* six=new Node(60);
    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    six->next=NULL;

   print(head);

   cout<<"Middele Node is: "<<getMiddele(head)->data<<endl;
   return 0;
}