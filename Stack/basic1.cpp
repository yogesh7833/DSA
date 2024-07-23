#include<iostream>
#include<stack>
using namespace std;

int main(){
     //  creation of stack 
   stack<int>st;
    
    // insertion  in stack 
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);
     

     //remove 
     st.pop();

     //check element on top 

     cout<<"Element on top"<< st.top()<<endl;

     //size
     cout<<"size of stack is:"<<st.size()<<endl;

    //  empty stack hai ya nhi 
    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}