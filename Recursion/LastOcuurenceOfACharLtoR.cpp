#include<iostream>
using namespace std;
void solve(string& s,char x,int i,int& ans){
    //base case
    if(i>=s.size()){
        return;
    }

    // 1 case solve
    if(s[i]==x){
        ans=i;
    }
    solve(s,x,i+1,ans);
}
int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int i=0;
    int ans=-1;
    solve(s,x,i,ans);
    cout<<ans;
}