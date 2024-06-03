#include<iostream>
using namespace std;
void solve(string& s,char x,int i,int& ans){
    //base case
    if(i<0){
        return;
    }
    if(s[i]==x){
        ans=i;
        return;
    }
    
    solve(s,x,i-1,ans);
}
int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int i=s.length()-1;
    int ans=-1;
    solve(s,x,i,ans);
    cout<<ans;
}
