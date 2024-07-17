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
Node *getIntersectionNodee(Node *headA, Node *headB) {
       Node* temp1=headA;
       Node* temp2=headB;
       while(temp1!=NULL && temp2!=NULL ){
         if(temp1==temp2){
            return temp1;
         }
         temp1=temp1->next;
         temp2=temp2->next;
        }
       if(temp1==NULL){
         //temp2 is bigger than temp1 Now Calculate the length that how much 
         // temp2 is greater than temp1 
           int count=0;
            while(temp2!=NULL){
               count++;
                temp2=temp2->next;
            }
            while(count--){
                headB=headB->next;
            }
        }
        else{
         //temp1 is bigger than temp2 Now Calculate the length that how much 
         // temp1 is greater than temp2 
           int cou=0;
            while(temp1!=NULL){
               cou++;
                temp1=temp1->next;
            }
            while(cou--){
                headA=headA->next;
            }
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
}
// Node *getIntersectionNode(Node *headA, Node *headB) {
//        Node* temp1=headA;
//        Node* temp2=headB;
//        while(temp1->next && temp2->next ){
//          if(temp1==temp2){
//             return temp1;
//          }
//          temp1=temp1->next;
//          temp2=temp2->next;
//         }
//        if(temp1->next==0){
//          //temp2 is bigger than temp1 Now Calculate the length that how much 
//          // temp2 is greater than temp1 
//            int count=0;
//             while(temp2->next){
//                count++;
//                 temp2=temp2->next;
//             }
//             while(count--){
//                 headB=headB->next;
//             }
//         }
//         else{
//          //temp1 is bigger than temp2 Now Calculate the length that how much 
//          // temp1 is greater than temp2 
//            int cou=0;
//             while(temp1->next){
//                cou++;
//                 temp1=temp1->next;
//             }
//             while(cou--){
//                 headA=headA->next;
//             }
//         }
//         while(headA!=headB){
//             headA=headA->next;
//             headB=headB->next;
//         }
//         return headA;
// }
int main(){
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* four=new Node(4);
    Node* five=new Node(5);
    Node* head2=new Node(1);   
    Node* second2=new Node(2);
             
    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    head2->next=second2;
    second2->next=third;
    cout<<getIntersectionNodee(head,head2)->data;
    
}