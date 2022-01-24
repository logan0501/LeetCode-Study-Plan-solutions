class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        int count=1,i=0;
        for(;i<chars.size()-1;i++){
            if(chars[i]==chars[i+1]){
                count++;
            }else{
                s+=chars[i];
                if(count>1)s+=to_string(count);
                count=1;
            }
        }
        if(i<chars.size() ){
            s+=chars[i];
            if(count>1)s+=to_string(count); 
        }

        for(i=0;i<s.size();i++){
            chars[i]=s[i];
        }
        return s.size();
    }
};