class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
           
                
            sum+=mat[i][i];
            }
        int temp=n;
        for(int i=0;i<n;i++){
            temp--;
            if(i!=temp){
                sum+=mat[i][temp];
            }
        }
        return sum;
        
    }
};