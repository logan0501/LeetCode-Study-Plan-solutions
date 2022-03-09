class NumArray {
    vector<int> *presum;
public:
    NumArray(vector<int>& nums) {
        presum=new vector<int>(nums.size(),0);
        (*presum)[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            (*presum)[i]=(*presum)[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)return (*presum)[right];
        return (*presum)[right]-(*presum)[left-1];
    }
    ~NumArray(){
        delete presum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */