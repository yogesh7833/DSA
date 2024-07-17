#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int data){
        this->val=val;
        this->next=NULL;
    }

};

void print(ListNode* &head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
    ListNode* find(ListNode* &head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }
 ListNode* mergetwosortedLL(ListNode* headA, ListNode* headB) {
    if(headA==NULL){
        return headB;
    }
    if(headB==NULL){
        return headA;
    }
    ListNode* newNode=new ListNode(-1);
    ListNode* pointer=newNode;
    while(headA!=NULL && headB!=NULL){
        if(headA->val<=headB->val){
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
    if(headA!=NULL){
        pointer->next=headA;
        
    }
    if(headB!=NULL){
        pointer->next=headB;
        
    }
    return newNode->next;
  }
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        // break the linked list in two halfs using mid
        ListNode* mid=find(head);
        ListNode* lefty=head;
        ListNode* righty=mid->next;
        mid->next=NULL;

        //Sort both lefty and righty
        lefty=sortList(lefty);
        righty=sortList(righty);

        //merge both lefty and righty
        ListNode* mergeeLL=mergetwosortedLL(lefty,righty);
        return mergeeLL;
    }