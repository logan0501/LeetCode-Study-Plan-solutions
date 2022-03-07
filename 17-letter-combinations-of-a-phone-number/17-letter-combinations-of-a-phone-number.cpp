class Solution {
public:
unordered_map<char,string> umap=
{
	{'2',"abc"},
	{'3',"def"},
	{'4',"ghi"},
	{'5',"jkl"},
	{'6',"mno"},
	{'7',"pqrs"},
	{'8',"tuv"},
	{'9',"wxyz"},
};
vector<string> res;
void helper(string cur,int i,string digits){
	if(i==digits.size()){
		res.push_back(cur);return;
	}
	for(char j:umap[digits[i]]){
		helper(cur+j,i+1,digits);
	}
}
vector<string> letterCombinations(string digits) {
        if(digits=="")return {};
		helper("",0,digits);    
		return res;    
    }
};