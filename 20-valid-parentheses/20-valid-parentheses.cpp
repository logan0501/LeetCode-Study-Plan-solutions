class Solution {
public:
    bool isMatching(char c1,char c2){
        return ((c1=='(' && c2==')') || (c1=='[' && c2==']') || (c1=='{' && c2=='}'));
    }
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
          
            if(c=='(' || c=='[' || c=='{')st.push(c);
            else{
                if(st.empty())return false;
                else if(!isMatching(st.top(),c))return false;   
                st.pop();
            } 
             
        }
        return st.empty()==true;
    }
};