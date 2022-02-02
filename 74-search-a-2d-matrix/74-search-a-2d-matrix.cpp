class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int tr=0,tc=0;
        int r=matrix.size(),c=matrix[0].size();
        for(int i=0;i<r;i++){
            if(matrix[i][0]<= target && matrix[i][c-1]>=target){
                tr=i;
                break;
            }
        }
        for(int i=0;i<c;i++){
            if(matrix[tr][i]==target)return true;
        }
        return false;
    }
};