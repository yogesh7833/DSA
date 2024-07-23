#include<iostream>
#include<stack>
using namespace std;
 

 void insertAtBottom(stack<int> &s,int target){
    // base case 
    if(s.empty()){
        s.push(target);
        return;
    }

    int top=s.top();
    s.pop();
    // recursive call 
    insertAtBottom(s,target);

    //backtrack
    s.push(top);

} 
 void ReverseStack(stack<int>& s){
    if(s.empty()){
        return;
    }
    int target=s.top();
    s.pop();

    //reverse stakc
    ReverseStack(s);

    // insert at bottom 
    insertAtBottom(s,target);
 }
int main(){
   stack<int>s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   ReverseStack(s);
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }
}