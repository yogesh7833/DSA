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
    //write a distructor to delete a node
    ~Node(){
        // write your code here 
        cout<<"Node with vaue:"<<this->data<<"deleted"<<endl;
    }
};
void insertathead(Node* &head,Node* &tail,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
void insertattail(Node* & head,Node* &tail,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
       head=newNode;
       tail=newNode;
       return;
    }
    tail->next=newNode;
    tail=newNode;
}
int findlength(Node* &head){
  Node* temp=head;
  int len=0;
  while(temp!=NULL){
    temp=temp->next;
    len++;
  }
  return len;
}
void insertAtPosition(int data,int position,Node* &head,Node* &tail){
   
    if(head==NULL){
         Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //insertAthead
    if(position==0){
        insertathead(head,tail,data);
        return;
    }
    //insert at tail
    int len=findlength(head);
    if(position==len){
        insertattail(head,tail,data);
        return;
    }
    //step 1 find the position of prev and curr
    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    //step-2
     Node* newNode=new Node(data);
     //step-3
     newNode->next=curr;
     //step-4
     prev->next=newNode;


}
void deleteAtposition(int position,Node* &head,Node* &tail){
    if(head==NULL){
        cout<<"can't delete, LL is empty";
        return;
    }
    // deleteing first Node 
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    // deleting last Node
    int len=findlength(head);
    if(position==len){
        //step-1 find prev
        int i=1;
        Node* prev=head;
        while(i<position-1){
             prev=prev->next;
             i++;
        }
        prev->next=NULL;
        Node* temp=tail;
        tail=prev;
        delete temp;
        return;
    }
    //deletion at middelee
    //step1 find prev and curr 
    int i=1;
    Node* prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    // step-2 
    prev->next=curr->next;
    // step 3 
    curr->next=NULL;
    // step 4 
    delete curr;
    return;

    
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertathead(head,tail,20);
    insertathead(head,tail,30);
    insertathead(head,tail,40);

    insertathead(head,tail,50);
    insertathead(head,tail,60);
    insertathead(head,tail,70);
  print(head);
//   cout<<"head:"<<head->data<<endl;
//   cout<<"tail:"<<tail->data<<endl;
//   cout<<endl;
//   insertAtPosition(101,6,head,tail);
//   print(head);
//     cout<<"head:"<<head->data<<endl;
//   cout<<"tail:"<<tail->data<<endl;
// deleteAtposition(1,head,tail);
// print(head);
deleteAtposition(2,head,tail);
print(head);
}