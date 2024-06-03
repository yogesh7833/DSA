#include<iostream>
using namespace std;

void removeoccre(string& s,string& part){
        int found=s.find(part);
        if(found!=string::npos){
            //part string hase been located please remove it;
         string left_part=s.substr(0,found);
         string right_part=s.substr(found+part.size(),s.size());
          s=left_part+right_part;
         removeoccre(s,part);
        }
        else{
            //base case
            return;
        }
    }
int main(){
    string s="daabcbaabcbc";
    string part="abc";
    removeoccre(s,part);
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    
}
