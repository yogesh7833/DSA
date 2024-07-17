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
int getlength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
Node* reversKNodes(Node* &head,int k){
 if(head==NULL){
    cout<<"LL is empty";
    return NULL;
 }
 int len=getlength(head);
 if(k>len){
    cout<<"Enter value for k"<<endl;
    return head;
 }
 //it means number of nodes is greater then k
 //step-a reverse first k nodes
 Node* prev=NULL;
 Node* curr=head;
 Node* forward=curr->next;
 int count=0;
 while(count<k){
   forward=curr->next;
   curr->next=prev;
   prev=curr;
   curr=forward;

    count++;

 }
 //step-B recursive call
 if(curr!=NULL){
    //we still have nodes to reverse
    head->next=reversKNodes(curr,k);
 }
//  step-c return head of the modified LL
return prev;
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
    print(head);
    cout<<endl;
    head=reversKNodes(head,3 );
    print(head);
    return 0;
}