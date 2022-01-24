class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        vector<int> hash1(256);
        vector<int> hash2(256);
        int left=0,right=0;
        while(right<s1.size()){
            hash1[s1[right]]++;
            hash2[s2[right]]++;
            right++;
        }
        right--;
        while(right<s2.size()){
            cout<<s2[right]<<endl;
            if(hash1==hash2)return true;
            right++;
            if(right!=s2.size())
                hash2[s2[right]]++;
            hash2[s2[left]]--;
            left++;
        }
        return false;
    }
};