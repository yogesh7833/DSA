#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }

    void push(int data){
       if(size-top>1){
        //space available 
        //insert 
        top++;
       arr[top]=data;
       }
       else{
        //space not avialbale 
       cout<<"stack overflow"<<endl;
      }
    }
    void pop(){
         if(top==-1){
            //stack is Empty
            cout<<"stack underflow , can't delete element"<<endl;
         }
         else{
            //stack is not empty
            top--;
         }
    }
    int getTop(){
        if(top==-1){
            //stack empty then there is not top element
            cout<<"there is no element in stack"<<endl;
        }
        else{
            return arr[top];
        }
    }
    int getSize(){
        return top+1;
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // s.push(60);
    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"size of stack"<<s.getSize()<<endl;
    s.pop();



    return 0;
}