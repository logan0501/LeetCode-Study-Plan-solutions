class Solution {
public:
    int maxArea(vector<int>& arr) {
    int total = 0, i = 0, j = arr.size() - 1;
    while (i < j)
    {
        int temp = (j - i) * min(arr[i], arr[j]);
        if (arr[i] > arr[j])
        {
            j--;
        }
        else
            i++;
        total = max(total, temp);
    }
    return total;
    }
};