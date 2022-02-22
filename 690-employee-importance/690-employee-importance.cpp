/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int sum=0;
    unordered_map<int,Employee*> umap;
    void dfs(int id){
    
        sum+=umap[id]->importance;
    
        for(int nbr:umap[id]->subordinates){
            dfs(nbr);
        }
    }
    int getImportance(vector<Employee*> employees, int id) {
        for(auto a:employees){
            umap[a->id]=a;
        }
        dfs(id);
        return sum;
    }
};