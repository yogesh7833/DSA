#include<iostream>
using namespace std;

class Node{
   public :
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
    ~Node(){
        //write your code here
        cout<<"Node with value:"<<this->data<<"deleted"<<endl;
    }
};
  //i wnt to insert a node right at the head of thr linked list
  void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //step-1 
    Node* newNode=new Node(data);
    //step-2
    newNode->next=head;
    //step-3
    head=newNode;
  }
    // i want to insert a node right at the end of Linked List
  void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //step-1:create a node
    Node* newNode=new Node(data);
    //step -2:connect both tail Node
      tail->next=newNode;
      tail=newNode;

    
  }
  int findlength(Node* &head){
    int len=0;
    Node* tamp=head;
    while(tamp!=NULL){
          tamp=tamp->next;
          len++;
    }
   
  }

 void insertAtposition(int position,Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }
    int len=findlength(head);
    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }
    //step-1 find the position of pre and curr
    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    //stap-2;
    Node* newNode=new Node(data);
    //step -3;
    newNode->next=curr;
    //step-4;
    prev->next=newNode;


 }

 void deleteNode(int position,Node* &head,Node* &tail){
    if(head==NULL){
        cout<<"can not delete, LL is empty"<<endl;
        return;
    }
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int len =findlength(head);
     
        if(position==len){
            //step-1 find previous
            int i=1;
            Node* prev=head;
            while(i<=position-1){
                prev=prev->next;
                i++;
            }
            //step-2 
            prev->next=NULL;
            //step-3
            Node* temp=tail;

            tail=prev;
            // step-4 
            delete temp;
        }
    //  deleting at middele 
    //  step-1 find prev and middle 
    int i=1;
    Node* prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    // step-2 
    prev->next=curr->next;
    // step-3 
    curr->next=NULL;
    // step-5 

    delete curr;

 }
  void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
 Node* reverseUsingRecursion(Node* &prev,Node* &curr){
    //base case
    if(curr==NULL){
        //LL reverse ho gyi hai
        return prev;
    }
    Node* forward=curr->next;
    curr->next=prev;
    reverseUsingRecursion(curr,forward);

 }

 Node* reverseUsingLoop(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
     }
int main(){
     Node* head=NULL;
     Node* tail=NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    insertAtTail(head,tail,77);

    
    print(head);
    cout<<endl;
    //  By recursion 
    // Node* prev=NULL;
    // Node* curr=head;
    // head=reverseUsingRecursion(prev,curr);
    // cout<<endl;
    // print(head);
    // cout<<endl;

    // through by loop 
    // head= reverseUsingLoop(head);
    // print(head);

    

return 0;
}