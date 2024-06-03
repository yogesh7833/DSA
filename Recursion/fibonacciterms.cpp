#include<iostream>
using namespace std;
int fib(int n){
    //base cases
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
        
    }
    //recursive relation 
    
    int ans=fib(n-1)+fib(n-2);
    
    return ans;
}
int main(){
    int n;
    cout<<"enter the term you want to find"<<endl;
    cin>>n;
    
    int ans=fib(n);
    cout<<"your term is"<<ans<<endl;
}