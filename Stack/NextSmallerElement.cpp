#include<iostream>
#include<vector>
#include<stack>
using namespace std;

   // left se right jate vakt prev  smaller eelment find karna 

vector<int> prevSmallerElement(vector<int>& v){
  stack<int>s;
  s.push(-1);
  vector<int>ans(v.size());
  //left to right move karenge for prev smaller element
  for(int i=0;i<v.size();i++){
      int curr=v[i];
      while(s.top()>curr){
        s.pop();
      }
      ans[i]=s.top();
      s.push(curr);
  }
  return ans;

}

vector<int> nextSmaller(vector<int>& v){
   stack<int>s;
  s.push(-1);

  vector<int>ans(v.size());

  for(int i=v.size()-1;i>=0;i--){
    int curr=v[i];
    // jab tak vector ka eleemnt chhota hai stack ke stakck ke top element se jab tak pop 
    while(s.top()>=curr){
      s.pop();
    }
    // jab stack ka element chhota hai vecotr element se ans vecotr mai vecotr element ko store karo and push karna in stack
    ans[i]=s.top();
    s.push(curr);
  }
  return ans;
}
int main(){
  vector<int>v;
  v.push_back(2);
  v.push_back(1);
  v.push_back(4);
  v.push_back(3);

  // vector<int>anss=nextSmaller(v);
  
  vector<int>ans1=nextSmaller(v);
  cout<<"printing"<<endl;
  for(int i=0;i<ans1.size();i++){
     cout<<ans1[i]<<" ";
  }
  vector<int>ans2=prevSmallerElement(v);
  cout<<endl;
  for(int i=0;i<ans2.size();i++){
     cout<<ans2[i]<<" ";
  }

  
}
