class Solution {
public:
    vector<string> res;
    void helper(string &&cur,int n,int open,int close,int i){
	    if(i==2*n){res.push_back(cur);return;}
	    if(open<n)helper(cur+'(',n,open+1,close,i+1);
	    if(close<open)helper(cur+')',n,open,close+1,i+1);
    }
    vector<string> generateParenthesis(int n) {
	    helper("",n,0,0,0);
	    return res;
    }
};