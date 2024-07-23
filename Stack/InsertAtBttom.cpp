#include<iostream>
#include<stack>
using namespace std;

 void solve(stack<int> &s,int target){
    // base case 
    if(s.empty()){
        s.push(target);
        return;
    }

    int top=s.top();
    s.pop();
    // recursive call 
    solve(s,target);

    //backtrack
    s.push(top);

} 
 
 void insertAtBottom(stack<int> & s){
  if(s.empty()){
    cout<<"stack is empty, cant insert at bottom"<<endl;
  }
  int target=s.top();
  s.pop();
  solve(s,target);
 }

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    insertAtBottom(s);

    cout<<"printing stack"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}