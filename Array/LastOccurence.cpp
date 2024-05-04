#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>arr,int key){
 int s=0;
 int e=arr.size()-1;
 int ans=0;
 while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
        ans=mid;
        s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
 }
 return ans;
}
int main(){
    vector<int>arr{2,5,7,7,7,7,9,20};
    int key=7;
    int result=find(arr,key);
    cout<<result;
}