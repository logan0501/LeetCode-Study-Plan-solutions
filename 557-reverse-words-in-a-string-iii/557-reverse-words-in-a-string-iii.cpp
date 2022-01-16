class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        for(int i=0;i<s.length()+1;i++){
            if(s[i]==' ' || i==s.length()){
                cout<<start;
                reverse(s.begin()+start,s.begin()+i);
                start=i+1;
            }
        }
        return s;
    }
};