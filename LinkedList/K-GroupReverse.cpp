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
Node* reverseKNodes(Node* &head,int k){
    if(head=NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len=getlength(head);
    if(k>len){
        cout<<len<<endl;
        cout<<"Enter valid vlue for k"<<endl;
        return head;
    }
    //it means number odf nodes in LL is>=k
    //step A: reverse first k Nodes of LL
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
    //step:B recursive call
    if(forward!=NULL){
        //we still have nodes to reverse
        head->next=reverseKNodes(forward,k);
    }
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
    // six->next=NULL;
    // print(head);
    head=reverseKNodes(head,3);
    print(head);
    return 0;
}