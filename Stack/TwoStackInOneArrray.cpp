#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size){
      arr=new int[size];
      this->size=size;
      top1=-1;
      top2=size;
    }
    // functions 
    void push1(int data){
        if(top2-top1==1){
            //space not availablw
            cout<<"overflow"<<endl;
        }
        else{
          //space avilable
         top1++;
         arr[top1]=data; 
           }
        
    }
    void pop1(){
        if(top1==-1){
            //stack empty
            cout<<"UnderFlow in Stack 1";
        }     
        else{
            //stack not empty
            top1--;

        }
    }
    void push2(int data){
        if(top2-top1==1){
            // space not available
            cout<<"OVERFLOW";
        }
        else{
            top2--;
            arr[top2]=data;
        }
    }
    void pop2(){
        if(top2==size){
            // stack is empty 
            cout<<"UnderFLow in Stack 2";
        }
        else{
            //stack 2 is not empty
            top2++;
        }
    }
};
int main(){
  
}
