class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0,h=arr.size()-1;
        int minr=INT_MAX;
        while(l<=h){
            int mid = (h+l)/2;
           
            if(arr[mid]>=arr[l]){
                if(arr[l]>arr[h]){
                    l=mid+1;
                    minr=min(minr,arr[mid]);  
                }else{
                    h=mid-1;
                    minr=min(minr,arr[mid]);
                }

            }else{
                if(arr[h]<arr[l]){
                    h=mid-1;
                    minr=min(minr,arr[mid]); 
                }else{
                    l=mid+1;
                    minr=min(minr,arr[mid]); 
                }

            }
        }
        return minr;
    }
};