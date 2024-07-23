#include<iostream>
#include<stack>
using namespace std;
 

void insertSorted(stack<int>& s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int top=s.top();
    if(target<top){
        s.push(target);
        return;
    }
    else{
        s.pop();
        insertSorted(s,target);
        //backtracking
        s.push(top);

    }
}
 void sortStack(stack<int>& s){
    if(s.empty()){
        return;
    }
    int target=s.top();
    s.pop();

    //reverse stakc
    // ReverseStack(s);
    sortStack(s);

    // insert at bottom 
    // insertAtBottom(s,target);
    insertSorted(s,target);
 }
int main(){
   stack<int>s;
   s.push(7);
   s.push(11);
   s.push(3);
   s.push(5);
   s.push(9);
   sortStack(s);
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }
}