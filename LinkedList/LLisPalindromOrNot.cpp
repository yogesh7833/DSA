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
// #include<iostream>
// using namespace std;
// class Node{
//    public:
//    int data;
//    Node* next;
//    Node(int data){
//     this->data=data;
//     this->next=NULL;
//    }
// };
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
bool chackPalindrom(Node* &head){
   if(head==NULL){
    cout<<"LL is empty"; 
    
    return false;
   }
   if(head->next==NULL){
    //single Node
    return true;
   }

   //it means nodes are greater than one
   Node* slow=head;
   Node* fast=head->next;
   while(fast!=NULL){
    fast=fast->next;
      if(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
      }
   }
   //slow pointer is pointing to the middle node
    Node* reverseLLHead=reverse(slow->next);
    slow->next=reverseLLHead;
    //step c start comparision 
    Node* temp1=head;
    Node* temp2=reverseLLHead;
    while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            //Not palindrom
            return false;
        }
        else{
            //if data is equal, tab aage badh jayenge 
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;
}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(300);
    Node* four=new Node(300);
    Node* five=new Node(20);
    Node* six=new Node(10);

    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    print(head);
    cout<<endl;
    bool ispalindrom=chackPalindrom(head);
    if(ispalindrom){
        cout<<"LL is valid palindrom";
    }
    else{
        cout<<"LL is not valid palindrom";
    }
    
    return 0;
}