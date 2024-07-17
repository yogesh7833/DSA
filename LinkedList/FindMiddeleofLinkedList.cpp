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
    cout<<"LL is empty"<<endl;
    return head;
  }
  if(head->next==NULL){
    //onty one Node
    return head;
  }
  //Linked have greater node
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
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    // Node* sixth=new Node(60);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    // sixth->next=NULL;
    print(head);
     cout<<"Middele Node is: "<<getMiddele(head)->data<<endl;

   return 0;
}