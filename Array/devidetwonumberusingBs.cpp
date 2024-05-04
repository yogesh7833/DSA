#include<iostream>
using namespace std;
int find(int dividend,int divisor){
    int s=0;
    int e=abs(dividend);
   int ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(abs(mid*divisor)==abs(dividend)){
            return mid;
        }
        else if(abs(mid*divisor)>abs(dividend)){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }

    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
        return ans;
    }
    else{
        return -ans;
    }
}
int main(){
    int dividend=22;
    int divisor=7;
    int result=find(dividend,divisor);
    cout<<result;
}