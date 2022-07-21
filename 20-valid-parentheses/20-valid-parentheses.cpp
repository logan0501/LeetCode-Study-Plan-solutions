class Solution {
public:
    bool check(char a,char b){
        return (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']');
    }
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='(' || c=='{' || c=='[')st.push(c);
        else{
            if(st.empty())return false;
            else{
         
                if(check(st.top(),c)){
                     
                    st.pop();
                }else return false;
            }
        }
        }
        return st.empty();
            
    }
    
};