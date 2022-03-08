class Solution {
public:
vector<vector<int>>  res;
vector<int> temp;
void helper(int idx,int n,int k){
	cout<<temp.size()<<"   "<<n<<endl;
	if(n<0)return;
	if(temp.size()>k)return;
	if(n==0 && temp.size()==k){
		res.push_back(temp);
		return;
	}

	for(int i=idx;i<=9;i++){
		temp.push_back(i);
		helper(i+1,n-i,k);
		temp.pop_back();
	}
}
vector<vector<int>> combinationSum3(int k, int n) {
     helper(1,n,k);
     return res;   
}
};