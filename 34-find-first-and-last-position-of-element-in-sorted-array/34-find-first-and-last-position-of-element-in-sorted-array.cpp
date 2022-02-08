class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int> res;
        int l=0,r=arr.size()-1;
        while(l<=r){
            int mid = l+(r-l)/2;
         
            if(arr[mid]==target){
              
                if(mid==0 || arr[mid]!=arr[mid-1]){res.push_back(mid);break;}
                else r=mid-1;
               
            }else if(arr[mid]>target){r=mid-1;}
            else l=mid+1;
        }
         if(res.empty())return{-1,-1};
        l=0;
        r=arr.size()-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(arr[mid]==target){
                if(mid==arr.size()-1 || arr[mid]!=arr[mid+1]){res.push_back(mid);break;}
                else l=mid+1;
            }else if(arr[mid]>target){r=mid-1;}
            else l=mid+1;
        }
      
        return res;
    }
};