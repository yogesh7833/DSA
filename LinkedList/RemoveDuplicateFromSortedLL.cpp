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
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
void RemoveDuplicate(Node* &head){
    if(head==NULL){
        cout<<"LL is empty";
        return ;
    }
    if(head->next==NULL){
        cout<<"single node";
        return ;
    }
    //LL have More than One  Node
    Node* curr=head;
        while(curr!=NULL){
            if((curr->next!=NULL)&&(curr->data==curr->next->data)){
                //equal
                Node* temp=curr->next;
                    curr->next=curr->next->next;
                    // delete node 
                    temp->next=NULL;
                    delete temp;
            }
            else{
                //not eqaul
                curr=curr->next;
            }
        
        }
}
int main(){
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(2);
    Node* four=new Node(3);
    Node* five=new Node(4);
    Node* six=new Node(4);

    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    print(head);
    cout<<endl;
    RemoveDuplicate(head);
    print(head);
    return 0;
}