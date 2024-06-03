#include<iostream>
#include<vector>
using namespace std;
bool print(vector<int>& arr,int i,int& n){
    //base case
    if(i==n-1){
        return true;
    }
   if(arr[i+1]<=arr[i]){
      return false;
   }
   
   
    print(arr,i+1,n);
}
int main(){
   vector<int>arr{2,6,7,9,12,11};
    int i=0;
    int n=arr.size();
    bool ans=print(arr,i,n);
    cout<<ans;
}