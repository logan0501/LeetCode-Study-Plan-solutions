class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
      vector<int> v;
      int l=0,h=arr.size()-1;
        while(l<h){
            if(arr[l]+arr[h]>target)h--;
            else if (arr[l]+arr[h]<target)l++;
            else {v.push_back(l+1);v.push_back(h+1);break;}
        }
    return v;
    }
};