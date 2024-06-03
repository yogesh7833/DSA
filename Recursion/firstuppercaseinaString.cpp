#include<iostream>
using namespace std;
  char solve(string str){
    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            return str[i];
        }
    }
    return 0;
  }
int main(){
    string str="helloordls";
    char ans=solve(str);
    if(ans==0){
        cout<<"uppercase is not presnet";
    }
    else{
        cout<<"upper case is  present";
    }
}