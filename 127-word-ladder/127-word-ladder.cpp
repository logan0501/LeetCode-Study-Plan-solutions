class Solution {
public:
    int ladderLength(string wordst, string worden, vector<string>& words) {
        if(find(words.begin(),words.end(),worden)==words.end()) return 0;
        set<string> uset(words.begin(),words.end());
        queue<string> q;
        q.push(wordst);
        int d=0;
        while(!q.empty()){
            d++;
            int n=q.size();
            while(n--){
                string curr = q.front();
                q.pop();
                for(int i=0;i<curr.size();i++){
                    string temp=curr;
                    for(char c='a';c<='z';c++){
                        temp[i]=c;
                        if(temp==curr)continue;
                        if(temp==worden)return d+1;
                        if(uset.find(temp)!=uset.end()){
                            q.push(temp);
                            uset.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};