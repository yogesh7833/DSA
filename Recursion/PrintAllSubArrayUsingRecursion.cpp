#include<iostream>
#include<vector>
using namespace std;
// void printsubarray(vector<int>& arr,int i,int j){
//     //base case
//     if(j>=arr.size()){
//         return ;
//     }
//     //one case solve
//     for(i=0;i<=j;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     printsubarray(arr,i,j+1);
// }
void printsubarray_util(vector<int>& arr,int i,int j){
    //base case
    if(j==arr.size()){
        return ;
    }
    //one case solve
    for(int start=i;start<=j;start++){
        cout<<arr[start]<<" ";
    }
    cout<<endl;
    printsubarray_util(arr,i,j+1);
}
void printsubarray(vector<int>& arr){
  for(int i=0;i<arr.size();i++){
    int j=i;
    printsubarray_util(arr,i,j);
  }
}
int main(){
  vector<int>arr{1,2,3,4,5};
  printsubarray(arr);
  return 0;
}