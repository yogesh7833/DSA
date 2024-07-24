#include <bits/stdc++.h> 
class NStack
{
    int *a;
    int *top;
    int *next;
    int n;
    int size;
    int freeSpot;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        // Write your code here.
        n=N;
        size=S;
        freeSpot=0;
        a=new int[size];
        top=new int[n];
        next=new int[size];
        for(int i=0;i<n;i++){
            top[i]=-1;
        }
        for(int i=0;i<size;i++){
            next[i]=i+1;
        }
        next[size-1]=-1;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        if(freeSpot==-1){
            return false; //stack overfloe

        }
        //1-> find index
        int index=freeSpot;

        //2->update freespot
        freeSpot=next[index];

        //3->
        a[index]=x;
        //4->update next;
        next[index]=top[m-1];

        //5-> update top
        top[m-1]=index;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        if(top[m-1]==-1){
            return -1;
        }
       int index=top[m-1];
       top[m-1]=next[index];
       int poppedElement=a[index];
       next[index]=freeSpot;
       freeSpot=index;
       return poppedElement;
    }
};