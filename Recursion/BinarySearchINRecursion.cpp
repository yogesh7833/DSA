#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>& v,int s,int e,int& key){
    //base case
    // Case-1
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    //Case -2 key found ek solve kar do 
    if(v[mid]==key){
        return mid;
    }
    if(v[mid]<key){
       return binarysearch(v,mid+1,e,key);
    }
    else{
       return binarysearch(v,s,mid-1,key);
    }
    //
}
int main(){
    vector<int>v{10,20,40,60,70,90,99};
    int n=v.size();
    int key=70;
    int s=0;
    int e=n-1;
    int ans=binarysearch(v,s,e,key);
    cout<<"key is"<<ans;
    return 0;
}