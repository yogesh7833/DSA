#include<iostream>
#include<string>

using namespace std;
bool compare(string str,string str1){
    
    if(str.length()!=str1.length()){
        return false;
    }
    else{
        int j=0;
        for(int i=0;i<str.length();i++){
            if(str[i]!=str1[j]){
                return false;
            }
            j++;
        }
    }
    return true;
}


int main(){
  string str;
  string str1;
  cin>>str;
  cin>>str1;
   int result=compare(str,str1);
  if(result==true){
cout<<"equal";
  }
  else{
    cout<<"not equal";
  }
}