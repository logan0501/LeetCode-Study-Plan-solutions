class Solution {
public:
int minFallingPathSum(vector<vector<int>>& matrix) {
    int minv=INT_MAX;
    int m=matrix.size(),n=matrix[0].size();
    vector<int> prev(n,0);
    for(int i=0;i<n;i++)prev[i]=matrix[0][i]; 
    for(int i=1;i<m;i++){
        vector<int> curr(n,0);
       for(int j=0;j<n;j++){        
            curr[j]=matrix[i][j];
            int ld=INT_MAX,rd=INT_MAX;
            if(j>=1)ld=prev[j-1];
            if(j+1<n)rd=prev[j+1];
            curr[j]+=min(prev[j],min(ld,rd));
       }  
       prev=curr;      
    }
    for(int i=0;i<n;i++){
        minv=min(prev[i],minv);
    }
    return minv;
}
};