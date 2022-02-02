class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& sudoku) {
      unordered_set<char> rowset[9],colset[9],grid[9];

    //checking row
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(sudoku[i][j]!='.'){
                char c=sudoku[i][j];
                if(rowset[i].count(c)){
                       return false; 
                }else{
                    rowset[i].insert(c);
                }
                if(colset[j].count(c)){
                       return false; 
                }else{
                  colset[j].insert(c);
                }
                if(grid[(i/3)*3+(j/3)].count(c)){
                    return false;
                }else{
                    grid[(i/3)*3+(j/3)].insert(c);
                }
            }
        }
    }
    return true;
   
    }
};