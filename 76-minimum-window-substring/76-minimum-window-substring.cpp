class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> table;
        for(char c:t)table[c]++;
        int l=0,r=0,counter=table.size(),len=INT_MAX;
        string ans="";
        while(r<s.size()){
            if(table.find(s[r])!=table.end()){
                table[s[r]]--;
                if(table[s[r]]==0)counter--;
            }
            r++;
            while(counter==0){
                if(len>r-l){
                    len=r-l;
                    ans=s.substr(l,r-l);
                }
                if(table.count(s[l])==1){
                    table[s[l]]++;
                    if(table[s[l]]>0){counter++;cout<<l;}
                }
                l++;
            }
        }
        return ans;
    }
};