class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int ni=0,ti=0,ns=name.size()-1,ts=typed.size()-1;
        
        while(ni<=ns || ti<=ts){
            if(name[ni]==typed[ti]){
                ni++;
                ti++;
                
            }else{
               if(ti>0 && typed[ti-1]==typed[ti])ti++;
                else return false;
            }
            
        }
        return true;
    }
};