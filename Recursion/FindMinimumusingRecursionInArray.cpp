#include<iostream>
#include<limits.h>
using namespace std;
 void findmin(int arr[],int n,int i,int& min){
    //base case
    if(i>=n){
        return ;
    }
    //ek case solve kar do baaaki  recursion sambhal lega
    if(arr[i]<min){
        min=arr[i];
    }
    findmin(arr,n,i+1,min);
}
int main(){
    int arr[]={20,22,15,9,100,300};
    int n=6;
    int i=0;
    int min=INT_MAX;
    findmin(arr,n,i,min);
    cout<<min;
}