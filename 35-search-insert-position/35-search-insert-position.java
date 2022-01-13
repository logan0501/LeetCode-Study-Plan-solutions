class Solution {
    public int searchInsert(int[] arr, int target) {
       int left=0,right=arr.length;
        while(left<right){
        int mid=(left+right)/2;
        if(arr[mid]<target){
            left=mid+1;
        }else{
            right=mid;
        }
    }
    return left; 
    }
}