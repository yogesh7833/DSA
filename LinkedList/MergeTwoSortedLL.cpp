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
Node* mergeTwoLists(Node* headA, Node* headB) {
    if(headA==NULL){
        return headB;
    }
    if(headB==NULL){
        return headA;
    }
    Node* newNode=new Node(-1);
    Node* pointer=newNode;
    while(headA!=NULL && headB!=NULL){
        if(headA->data<=headB->data){
            pointer->next=headA;
            pointer=headA;
            headA=headA->next;
        }
        else{
            pointer->next=headB;
            pointer=headB;
            headB=headB->next;
        }
    }
    while(headA!=NULL){
        pointer->next=headA;
        pointer=headA;
        headA=headA->next;
    }
    while(headB!=NULL){
        pointer->next=headB;
        pointer=headB;
        headB=headB->next;
    }
    return newNode->next;
}
int main(){
    Node* head1=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(4);
    Node* head2=new Node(2);

    Node* five=new Node(3);
    Node* six=new Node(4);   
    // Node* second2=new Node(2);
             
    head1->next=second;
    second->next=third;
    // third->next=four;
    // four->next=five;
    // head2->next=second2;
    // second2->next=third;
    head2->next=five;
    five->next=six;
    // print(head2);
    cout<<endl;
    Node* ans=mergeTwoLists(head1,head2);
    print(ans);
    
    
    
}