class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
    vector<int> V(2);
    unordered_map<int,int> umap;
        for(int i=0;i<v.size();i++){
            if(umap.find(target-v[i])==umap.end()){
                umap.insert({v[i],i});
            }else{
               V={umap[target-v[i]],i};
            }
        }
        return V;
    }
};