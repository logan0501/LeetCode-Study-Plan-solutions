class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res="";
        stack<pair<char,int>> st;
        for(int i=0;i<s.size();i++){
            if(st.empty() and !isalpha(s[i])){st.push({s[i],i});continue;}
            if(s[i]==')' && st.top().first=='(')st.pop();
            else if (!isalpha(s[i]))st.push({s[i],i});
            
        }
        cout<<st.size();
        while(!st.empty()){
            auto top = st.top();
            st.pop();
            s.erase(top.second,1);
        }
        return s;
    }
};