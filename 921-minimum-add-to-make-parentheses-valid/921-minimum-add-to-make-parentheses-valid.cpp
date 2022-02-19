class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(char c:s){
            if(st.empty()){st.push(c);continue;}
            if(c==')' && st.top()=='(')st.pop();
            else st.push(c);
        }
        return st.size();
    }
};