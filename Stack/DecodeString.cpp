class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch==']'){
               string stringRepeat="";
               while(!st.empty() && !isdigit(st.top()[0])){
                string top=st.top();
                stringRepeat+=top=="[" ? "":top;
                st.pop();
               }
               string numericString="";
               while(!st.empty() && isdigit(st.top()[0])){
                     numericString+=st.top();
                     st.pop();
               }
               reverse(numericString.begin(),numericString.end());
               int n=stoi(numericString);

               //finl deconding 
               string currDecode="";
               while(n--){
                currDecode+=stringRepeat;
               }
               st.push(currDecode);
            }
            else{
                string temp(1,ch);
                st.push(temp);
            }
        }

        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();

        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
