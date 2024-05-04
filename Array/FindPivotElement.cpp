#include<iostream>
using namespace std;
int find(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(s==e){
            return s;
        }
        else if(mid<=e && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if( mid-1>=s && arr[mid]<arr[mid-1]){
            e=mid-1;
        }
        else if(arr[s]>arr[mid]){
          e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}
int main(){
    int arr[]={9,10,2,4,6,8};
    int size=6;
    int result=find(arr,size);
    cout<<result;
}