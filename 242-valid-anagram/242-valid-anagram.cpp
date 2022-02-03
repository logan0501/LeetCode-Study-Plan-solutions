class Solution {
public:
    bool isAnagram(string s1, string s2) {
     int arr[26]={0};
        if(s1.length()!=s2.length()){
            return false;
        }
    for(int i=0;i<s1.length();i++){
        arr[s1[i]-'a']++;
        arr[s2[i]-'a']--;
    }
    for(int count:arr){
        if(count)return false;
    }
return true;
    }
};