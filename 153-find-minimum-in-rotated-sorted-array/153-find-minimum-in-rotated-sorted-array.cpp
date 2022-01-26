class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0,h=arr.size()-1;
     
        while(l<h){
            if(arr[l]<arr[h])return arr[l];
            int mid = (l+h)/2;
            if(arr[mid]>=arr[l]){
                l=mid+1;
            }else{
                h=mid;
            }
        }
        return arr[l];
    }
};