class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int add = 0;
        int ans = INT_MAX;

        while (j < nums.size()) {
            add += nums[j];

        
            while (add >= target) {
                ans = min(ans, j - i + 1);
                add -= nums[i];
                i++;
            }

            j++;
        }

        return (ans == INT_MAX) ? 0 : ans;
    }
};
