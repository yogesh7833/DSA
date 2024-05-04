#include<iostream>
using namespace std;
int find(int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*mid==n){
            
          return mid; 

        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int result=find(n);
    int precison;
    cout<<"enter the number of digits you want"<<endl;
    cin>>precison;
    double step=0.1;
    double finalresult= result;
    for(int i=0;i<precison;i++){
        for(double j=finalresult;j*j<=n;j=j+step){
            finalresult=j;
        }
        step=step/10;
    }

    cout<<"final result is"<<finalresult;
}
