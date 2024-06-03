#include<iostream>
using namespace std;
void counting(int n){
    //base condition matlab rukna kab hai
    if(n==0){
        return;
    }
    //processing 
    cout<<n<<endl;

    // recursive relation 
    counting(n-1);

}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    counting(n);
    return 0;
}