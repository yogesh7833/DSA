#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        cout<<"Node with Value:"<<this->data<<"deleted"<<endl;
    }

};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    // step-1;
    Node* newNode=new Node(data);
    // step-2; 
    newNode->next=head;
    // step3;
    head->prev=newNode;
    // step-4;
    head=newNode;


}
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    // step-1;
    Node* newNode=new Node(data);
    //step-2

    tail->next=newNode;
    // step-3 
    newNode->prev=tail;
    // step-4;
    tail=newNode;

}
void insertAtPosition(int position,Node* &head,Node* &tail,int data){
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
    int len=getLength(head);
    if(position>len){
        insertAtTail(head,tail,data);
        return;
    }
    
    // step-1; find pre and curr
    int i=1;
    Node* prevNode=head;
    while(i<position-1){
          prevNode=prevNode->next;
          i++;
    }
    Node* curr=prevNode->next;
    // step-2 
    Node* newNode=new Node(data);
    // step-3 ;
    prevNode->next=newNode;
    // step-4;
    newNode->prev=prevNode;
    // step-5 
    curr->prev=newNode;
    // step-6 
    newNode->next=curr;
}
void deletefromPos(Node* &head,Node* &tail,int position){
    if(head==NULL){
        cout<<"Linked list is Empty";
        return;
    }
    if(head->next==NULL){
        //single Node
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
     int len=getLength(head);
    if(position>len){
        cout<<"please enter valid position"<<endl;
        return;
    }
    if(position==1){
        //want to delete the first Node
        Node* temp=head;
        head=head->next;
         head->prev=NULL;
        temp->next=NULL;
        
        delete temp;
        return;
    }
    
   
  
     if(position==len){
        Node* temp=tail;
        //delete last node
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
     }
    //  delete from the middle
    //step-1->find the curr,left,right
    int i=1;
    Node* left=head;
    while(i<position-1){
        left=left->next;
        i++;
    } 
    Node* curr=left->next;
    Node* right=curr->next;
    //step-2 
    left->next=right;
    //step-3
    right->prev=left;
    //step-4;
    curr->next=NULL;
    
    //step-5
    curr->prev=NULL;
    delete curr;
    
 }


int main(){
    
   Node* first=new Node(10);
   Node* second=new Node(20);
   Node* third=new Node(30);
    Node* head=first;
    Node* tail=third;
   first->next=second;
   second->prev=first;

   second->next=third;
   third->prev=second;
   

// //    print(first);
// //    cout<<endl;
   insertAtHead(head,tail,102);
   print(head);
   cout<<endl;
   insertAtTail(head,tail,400);
   print(head);
   cout<<endl;
   insertAtPosition(6,head,tail,500);
   print(head);
   cout<<endl;
   deletefromPos(head,tail,5);
   print(head);

}
