#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>a,int key){
    int s=0;
    int e=a.size()-1;
    int ans=0;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
   vector<int>a{1,3,4,4,4,4,6,7};
   int key=4;
   int result=find(a,key);
   cout<<result;


}