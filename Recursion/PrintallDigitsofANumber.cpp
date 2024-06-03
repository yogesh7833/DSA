#include<iostream>
using namespace std;
void print(int n){
    //base condition 
    if(n==0){
        return;
    }
    //hume sirf ek case solve kaena hai
    print(n/10);
    int digit=n %10;
    cout<< digit <<" ";
    
    
}
int main(){
    int n=6470000;
    if(n==0){
        cout<<0<<endl;
    }
    print(n);
    return 0;
}
