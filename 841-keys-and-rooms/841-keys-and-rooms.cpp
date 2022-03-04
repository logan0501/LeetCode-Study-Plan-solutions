class Solution {
public:
    void dfsHelper(vector<vector<int>> &rooms,vector<bool> &vis,int s){
        vis[s]=true;
        for(auto nbr:rooms[s])if(!vis[nbr])dfsHelper(rooms,vis,nbr);
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n,false);
        dfsHelper(rooms,vis,0);
        for(bool c:vis)if(!c)return false;
        return true;
        
    }
};