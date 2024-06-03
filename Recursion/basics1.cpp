#include<iostream>
using namespace std;
int factorial(int n){
    cout<<"function called for"<<n<<endl;
    //base condition matlab rukna kab hai
    if(n==1){
        return 1;
    }
    // int ans=n*factorial(n-1);
    int chhotiproblemAns=factorial(n-1);
    int badiproblemAns=n*chhotiproblemAns;
    return badiproblemAns;

}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;

}