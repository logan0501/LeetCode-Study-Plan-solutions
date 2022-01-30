class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
unordered_set<int> num_set;
        int max_count = 0, count = 0;

        for (auto n : nums) {
            num_set.insert(n);
        }

        for (auto n : num_set) {
            if (!num_set.count(n - 1)) {
                count = 0;
                while (num_set.count(n)) {
                    count++;
                    n = n + 1;
                }
                max_count = max(count, max_count);
            }
        }
        return max_count;
    }
};