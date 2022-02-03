class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int left=0;
        if(arr.size()==0)return 0;
        for(int i=1;i<arr.size();i++){
            if(arr[left]==arr[i])continue;
            else{
                left++;
                arr[left]=arr[i];
                
            }
        }
        return left+1;
    }
};