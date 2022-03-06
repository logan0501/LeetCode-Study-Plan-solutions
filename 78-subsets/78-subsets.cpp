class Solution {
public:
vector<vector<int>> res;
void generate(vector<int> &v,int i,vector<int> &cur){
	if(i==v.size()){
		res.push_back(cur);
		return;
	}
	cur.push_back(v[i]);
	generate(v,i+1,cur);
	cur.pop_back();
	generate(v,i+1,cur);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> cur;
        generate(nums,0,cur);
        return res;
    }
};