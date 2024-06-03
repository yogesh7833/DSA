#include<iostream>
#include<vector>
using namespace std;
void findkey(string& str,int& i,int& n,char& key,int& count){
    if(i>=n){
        return ;
    }
    // 1 case mujhe banana hai baki recursiion sambhallega
    if(str[i]==key){
        // ans.push_back(i);
        count++;
    }
    int newi=i+1;
     findkey(str,newi,n,key,count);
}
int main(){
    string str="yogeshkushwaha";
    int i=0;
    int n=str.length();
    // vector<int>ans;
    int count=0;
    char key='h';
    findkey(str,i,n,key,count);
    cout<<"printing nas"<<count<<endl;
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<end;
    // }
    
  return 0;
}