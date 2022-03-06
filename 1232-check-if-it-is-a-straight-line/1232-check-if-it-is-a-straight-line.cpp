class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       int dy,dx,ndy,ndx,i;
        dy=coordinates[1][1] - coordinates[0][1];
        dx=coordinates[1][0] - coordinates[0][0];
        for(i=2;i<coordinates.size();i++)
        {
                ndy=coordinates[i][1] - coordinates[0][1];  // new dy
                ndx=coordinates[i][0] - coordinates[0][0];  // new dx
                if(ndx * dy != ndy * dx)
                    return false;
        }
        return true;
    }
};