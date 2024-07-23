#include<iostream>
#include<vector>
#include<stack>
#include<limits.h>
using namespace std;


vector<int> prevSmallerElement(vector<int>& v){
  stack<int>s;
  s.push(-1);
  vector<int>ans(v.size());
  //left to right move karenge for prev smaller element
  for(int i=0;i<v.size();i++){
      int curr=v[i];
      while(s.top()!=-1 && v[s.top()]>=curr){
        s.pop();
      }
      ans[i]=s.top();
      s.push(i);
  }
  return ans;

}

vector<int> nextSmaller(vector<int>& v){
   stack<int>s;
   int size=v.size();
  s.push(-1);

  vector<int>ans(v.size());

  for(int i=v.size()-1;i>=0;i--){
    int curr=v[i];
    // jab tak vector ka eleemnt chhota hai stack ke stakck ke top element se jab tak pop 
    while(s.top() !=-1 && v[s.top()]>=curr){
      s.pop();
    }
    // jab stack ka element chhota hai vecotr element se ans vecotr mai vecotr element ko store karo and push karna in stack
    ans[i]=s.top();
    s.push(i);
  }
  return ans;
}

int getRactangularAreaHistogram(vector<int>& height){
    //1: prev smaller output 
    vector<int>prev=prevSmallerElement(height);

    //step 2-> next smaller
    vector<int>next=nextSmaller(height);
    int size=height.size();

    int maxArea=INT_MIN;
    for(int i=0;i<height.size();i++){
        int length=height[i];
        if(next[i]==-1){
            next[i]=size;
        }
        int width=next[i]-prev[i]-1;
        int area=length* width;
        maxArea=max(maxArea,area);
    }
    return maxArea;

}
int main(){
   vector<int>v;
   v.push_back(2);
   v.push_back(1);
   v.push_back(5);
   v.push_back(6);

   v.push_back(2);
   v.push_back(3);

   cout<<"Ans is:"<<getRactangularAreaHistogram(v)<<endl;
}
