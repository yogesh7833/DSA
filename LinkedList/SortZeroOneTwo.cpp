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
void sort(Node* &head){
    int zero=0;
    int one=0;
    int two=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
        }
        else if(temp->data==1){
            one++;
        }
        else if(temp->data==2){
            two++;
        }
        temp=temp->next;

    }
    // step : fill 0s,1s,2s in original ll
    temp=head;
    while(temp!=NULL){
        //filll 0s
        while(zero--){
            temp->data=0;
            temp=temp->next;
        }

        //fill 1s
        while(one--){
            temp->data=1;
            temp=temp->next;
        }

        //fill2s
        while(two--){
            temp->data=2;
            temp=temp->next;
        }
    }

}
Node* sort2(Node* &head){
//     if(head==NULL){
//         return NULL;
//     }
//     if(head->next=NULL){
//         return head;
// ;    }
    // create dummy Node 
    Node* zeroHead=new Node(-1);
    Node* ZeroTail=zeroHead;
     Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;
     Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;
       
    //   traverse the original ll 
    Node* curr=head;
    while(curr!=NULL){
       if(curr->data==0){
         Node* temp=curr;
         curr=curr->next;
         temp->next=NULL;

         //ab temp jo separate hoo chuki hai usko append karenge in zero tail 
         ZeroTail->next=temp;
         ZeroTail=temp;
       }
       else if(curr->data==1){
          Node* temp=curr;
         curr=curr->next;
         temp->next=NULL;

         //ab temp jo separate hoo chuki hai usko append karenge in zero tail 
         oneTail->next=temp;
         oneTail=temp;
       }
       else if(curr->data==2){
           Node* temp=curr;
         curr=curr->next;
         temp->next=NULL;

         //ab temp jo separate hoo chuki hai usko append karenge in zero tail 
         twoTail->next=temp;
         twoTail=temp;
       }
    }
    // ab yaha par teeno zero,one, two linked list ko add karna hai 
    // join them
    // MOdifify one wali LinkedList 
    Node* temp=oneHead;
    oneHead=oneHead->next;
    temp->next=NULL;
    delete temp;

    // Modify two Wali Linked List 
     temp=twoHead;
    twoHead=twoHead->next;
    temp->next=NULL;
    delete temp;
    //   join list 
    if(oneHead!=NULL){
        //one wali LL is not empty
        ZeroTail->next=oneHead;
        if(twoHead!=NULL){
            oneTail->next=twoHead;
        }
    }
    else{
        //one wali list is empty 
        if(twoHead!=NULL){
            ZeroTail->next=twoHead;
        }
    }
    // remove dummy nodes 
    temp=zeroHead;
    zeroHead=zeroHead->next;
    temp->next=NULL;
    delete temp;
    // return head of modified linked list 
    return zeroHead;
}
int main(){
    Node* head=new Node(1);
    Node* second=new Node(1);
    Node* third=new Node(1);
    Node* four=new Node(1);
    Node* five=new Node(1);
    Node* six=new Node(1);             
    head->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    print(head);
    cout<<endl;
    // sort(head);
    // print(head);
    head=sort2(head);
    print(head);
    return 0;
}