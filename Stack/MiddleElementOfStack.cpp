#include<iostream>
#include<stack>
using namespace std;

void findmiddle(stack<int>&s,int& totalsize){
    if(s.size()==0){
        cout<<"threre is no elemnt in stack";
        return;
    }
    if(s.size()==totalsize/2+1){
        cout<<"middle element is"<<s.top();
        return;
    }

    int temp=s.top();
    s.pop();
    // recursive call 
    findmiddle(s,totalsize);

    // backtrack 
    s.push(temp);

}
int main(){
    stack<int>s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // s.push(60);
    // s.push(70);
    int totalsize=s.size();
    findmiddle(s,totalsize);
}