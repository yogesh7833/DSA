#include<iostream>
#include<limits.h>
using namespace std;
void findmax(int arr[],int n,int i,int max){
    //base case
    if(i>=n){
        return ;
    }
     //first case solve jar do baki recursion sambhal ega
     if(arr[i]>max){
        max=arr[i];
     }
     findmax(arr,n,i+1,max);
}
int main(){
    int arr[]={10,20,30,44,32,12,66};
    int n=7;
    int i=0;
    int max=INT_MIN;
    findmax(arr,n,i,max);
    cout<<"our maxbvalue is"<<max;
}