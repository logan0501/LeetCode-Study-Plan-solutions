class Solution {
public:
    void helper(vector<char>& s,int i,int j){
        if(i>j)return;
        swap(s[i],s[j]);
        helper(s,i+1,j-1);
     
    }
    void reverseString(vector<char>& s) {
       helper(s,0,s.size()-1);
    
    }
};