#include<iostream>
using namespace std;
void find(int arr[],int n){
    // for(int i=0;i<n;i++){
    //     int index=abs(arr[i]);
    //     if(arr[index-1]>0){
    //         arr[index-1]*=-1;
    //     }
    // }
  
    // for(int i=0;i<n;i++){
    //     if(arr[i]>0){
    //         cout<<i+1;
    //     }
    // }
    int i=0;
    while(i<n){
        int index=arr[i]-1;
        if(arr[i]!=arr[index]){
            swap(arr[i],arr[index]);
        }
        else{
            i++;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
        
    }
}
int main(){
    int arr[]={1,3,5,3,4};
    int n=5;
    find(arr,n);
}