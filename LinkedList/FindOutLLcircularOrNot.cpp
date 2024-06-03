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
 int getlength(Node* &head){
    int len=0;
    Node* tamp=head;
    while(tamp!=NULL){
          tamp=tamp->next;
          len++;
    }
    return len;
   
  }
  bool isCircular(Node* &head){
    int count=0;
    int len=getlength(head);
    if(head==NULL){
        return true;
    }
    Node* temp=head->next;
    
     return false;
  }
int main(){
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
    // six->next=head;
   print(head);
   if(isCircular(head)){
    cout<<"ll is circular"<<endl;
   }
   else{
    cout<<"not circular"<<endl;
   }
    return 0;
}