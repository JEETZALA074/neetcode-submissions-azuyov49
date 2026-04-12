class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int x;
        int minu = INT_MAX;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        if(n == 0) return 1;

  
        if(nums[nums.size()-1] == 1) minu = 2;

        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                if(nums[i] > 1) return 1;
                else break;
            }
        }

        for(int i = 1; i < n; i++) {
            if(nums[i-1] <= 0) continue;

            if(nums[i] > 0) {
                if(nums[i] != nums[i-1]+1 && nums[i] != nums[i-1]) {
                    x = nums[i-1]+1;
                    minu = min(minu, x);
                }
                if(i == n-1 && nums[i] == nums[i-1]+1) {
                    x = nums[i]+1;
                    minu = min(minu, x);
                }
            }
        }

        if(minu == INT_MAX) return 1;
        return minu;
    }
};

