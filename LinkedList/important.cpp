#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAthead(Node* &head,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        return ;
    }
    newNode->next=head;
    head=newNode;
}
void insertattail(Node* &head,int data){
    Node* newNode=new Node(data);
    // Node* temp=head;
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;

}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    //   Node* node1=new Node(10);
    //   Node* head=node1;
    //   Node* tail=node1;
    // //   print(head);
    // //   cout<<endl;
    //   insertAthead(head,20);
    //   print(head);
    //   cout<<endl;
    //   insertAthead(head,30);
    //   print(head);
    //  cout<<endl;
    // insertAttail(tail,40);
    // print(head);
    // cout<<endl;
    //   insertAttail(tail,50);
    // print(head);
    // cout<<endl;
    // Node* tail=NULL;
    Node* head=NULL;
      insertAthead(head,20);
      print(head);
      cout<<endl;
       insertAthead(head,30);
      print(head);
      cout<<endl;
       insertAthead(head,40);
      print(head);
      cout<<endl;
       insertAthead(head,50);
      print(head);
      cout<<endl;
       insertAthead(head,60);
      print(head);
      cout<<endl;
       insertattail(head,70);
      print(head);
      cout<<endl;
         insertattail(head,80);
      print(head);
      cout<<endl;
         insertattail(head,90);
      print(head);
      cout<<endl;
         insertattail(head,100);
      print(head);
      cout<<endl;
    


} 