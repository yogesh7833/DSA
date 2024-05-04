#include<iostream>
using namespace std;
int find(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(s==e){
            return s;
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={1,1,2,2,3,3,4,4,3,600,600,4,4};
    int size=13;
    int result=find(arr,size);
    cout<<result;
}