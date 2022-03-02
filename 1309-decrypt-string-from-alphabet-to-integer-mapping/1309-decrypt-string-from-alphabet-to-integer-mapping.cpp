class Solution {
public:
    string freqAlphabets(string s) {
        string res="";
        for(int i=s.size()-1;i>=0;){
            int num;
            
            if(s[i]=='#'){
                num=(s[i-1]-'0')+(s[i-2]-'0')*10;
                
                i-=2;
            }else{
                num=s[i]-'0';
            }
            cout<<num<<endl;
            res+=num+'a'-1;
            i--;
        } 
        reverse(res.begin(),res.end());
        return res;
    }
};