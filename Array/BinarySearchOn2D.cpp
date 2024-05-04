#include<iostream>
using namespace std;
bool find(int arr[][4],int row,int col,int target){
    int s=0;
    int e=row*col-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int rownumber=mid/col;
        int colnumber=mid%col;
        if(arr[rownumber][colnumber]==target){
            cout<<"found at"<<rownumber<<colnumber<<endl;
            return true;
        }
         if(arr[rownumber][colnumber]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return false;
}
int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int row=5;
    int col=4;
    int target=19;
    bool ans=find(arr,row,col,target);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<" not found";
    }
}