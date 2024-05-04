#include<iostream>
using namespace std;
int find(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(mid+1<=size-1 && arr[mid+1]==key){
            return mid+1;
        }
        else if(mid-1>=0 && arr[mid-1]==key){
            return mid-1;
        }
        else if(arr[mid]>key){
            e=mid-2;
        }
        else{
            s=mid+2;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,3,40,20,50,80,70};
    int size=7;
    int key=40;
    int result=find(arr,size,key);
    cout<<result;
}