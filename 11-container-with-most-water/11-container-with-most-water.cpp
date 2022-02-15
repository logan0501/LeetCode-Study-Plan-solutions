class Solution {
public:
    int maxArea(vector<int>& height) {
    int total = 0;
    int n = height.size();
    int j = n-1;
    int i = 0;
    while(i < j){
    int temp = (j-i)*min(height[i], height[j]);
    if(height[i] < height[j]){
    i++;
    }
    else{
    j--;
    }
    total = max(total, temp);
    }
    return total;
    }
    };