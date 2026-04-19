class Solution {
public:
    bool canFinish(vector<int>& nums, int k, int days) {
        int i = 0;
        int n = nums.size();
        int usedDays = 1;
        int curr = 0;

        while (i < n) {
            if (curr + nums[i] > k) {   
                usedDays++;
                curr = 0;
            }
            curr += nums[i];
            i++;
        }

        return usedDays <= days;
    }

    int splitArray(vector<int>& nums, int k) {
        int lo = *max_element(nums.begin(), nums.end());
        int hi = accumulate(nums.begin(), nums.end(), 0);

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            if (canFinish(nums, mid, k)) {   
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }

        return lo;
    }
};