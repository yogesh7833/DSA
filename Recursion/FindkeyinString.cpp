#include<iostream>
using namespace std;
int findkey(string& str,int& i,int& n,char& key){
    if(i>=n){
        return -1;
    }
    // 1 case mujhe banana hai baki recursiion sambhallega
    if(str[i]==key){
        return i;
    }
    int newi=i+1;
     findkey(str,newi,n,key);
}
int main(){
    string str="yogeshkushwah";
    int i=0;
    int n=str.length();
    char  key='o';
    int ans=findkey(str,i,n,key);
    cout<<"key is:"<<ans<<endl;
}