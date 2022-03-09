class Solution {
public:
int mySqrt(int x) {
	long long s=0,e=x,ans,mid;
	while(s<=e){
		mid = s+(e-s)/2;
		if(mid*mid==x)return mid;
		else if(mid*mid<x){
			ans=mid;
			s=mid+1;
		}else{
			e=mid-1;
		}
	}
	return ans;
}
};