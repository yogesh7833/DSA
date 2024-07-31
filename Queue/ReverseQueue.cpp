#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// void reverse(queue<int>& q){
//     stack<int>st;
//     while(!q.empty()){
//         st.push(q.front());
//         q.pop();
//     }
//     while(!st.empty()){
//         q.push(st.top());
//         st.pop();
//     }
// }
void reversee(queue<int>& q){
    if(q.empty()){
        return;
    }
    int top=q.front(); 
    q.pop();
    reversee(q);

    // backtrack 
    q.push(top);
}
    

int main(){
    queue<int>q;
    stack<int>st;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reversee(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
     

}