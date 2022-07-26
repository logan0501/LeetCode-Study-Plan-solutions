class Solution {
public:
    bool helper(int i,int j,int m,int n,vector<vector<char>> &board,string word,int idx){
        if(idx==word.size()-1)return true;
        char c = board[i][j];
        board[i][j]='0';
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        for(int k=0;k<4;k++){
            int xx = dx[k]+i;
            int yy = dy[k]+j;
            bool x1=xx>=0,y1=yy>=0;
           
            if(xx>=0 && yy>=0 && xx<m && yy<n && board[xx][yy]!='0' && word[idx+1]==board[xx][yy]){
             
                if(helper(xx,yy,m,n,board,word,idx+1))return true;
            }
        }
        board[i][j]=c;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(word=="")return false;
        int m=board.size(),n=board[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                       if(helper(i,j,m,n,board,word,0))return true;
                }
             
            }
        }
        return false;
    }
};