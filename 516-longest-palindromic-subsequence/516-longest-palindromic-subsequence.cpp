class Solution {
public:
int longestPalindromeSubseq(string s)
{
    string temp = s;
    reverse(temp.begin(), temp.end());
    int n = s.size(), m = temp.size();
    vector<int> prev(m+1,0);
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        vector<int> curr(m+1,0);
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == temp[j - 1])
            {
                curr[j] = 1 +prev[j - 1];
            }
            else
               curr[j] = max(prev[j], curr[j - 1]);
        }
        prev=curr;
    }
    return prev[m];
}
};