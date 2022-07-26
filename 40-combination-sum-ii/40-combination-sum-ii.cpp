class Solution {
public:
vector<vector<int>> res;
void f(int i,int target,vector<int> &arr,vector<int> &temp){   
    if(target==0){res.push_back(temp);}   
    
    for(int j=i;j<arr.size();j++){     
        if(j>i && arr[j]==arr[j-1])continue;
        if(target<arr[j])break;
        temp.push_back(arr[j]);
        f(j+1,target-arr[j],arr,temp);
        temp.pop_back();       
    }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int target)
{   
    vector<int> temp;
    sort(arr.begin(),arr.end());
    f(0,target,arr,temp);
    return res;
}
};