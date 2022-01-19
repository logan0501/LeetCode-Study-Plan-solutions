class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
          return false;
        }
      vector<int>hash1(26, 0);
      vector<int>hash2(26, 0);
      int right = 0, left = 0;
      while(right < s1.size()){
        hash1[s1[right] - 'a'] +=1;
        hash2[s2[right] - 'a'] +=1;
        right++;
      }
      right-=1;
      while(right < s2.size()){
        if(hash1 == hash2){
          return true;
        }
        right+=1;
        if(right != s2.size()) {hash2[s2[right]-'a']+=1;}
        hash2[s2[left]-'a'] -=1;
        left+=1;
        
      }
      return false;
    }
};