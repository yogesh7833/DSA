#include<iostream>
using namespace std;
int find(int arr[],int key){
    int s=0;
    int ans=-1;
    int size=7;
    int e=size-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;

           
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }


    }
    return -1;
    

}
int main(){
int arr[]={2,4,6,8,10,12,16};
int key=2;
int index=find(arr,key);
cout<<index;
}