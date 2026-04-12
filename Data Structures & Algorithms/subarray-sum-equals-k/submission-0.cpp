class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int first = 0;
        int second;
        int add = 0;
        int sum = 0;
        int p = 0;

        while (first < nums.size()) {
            second = first + 1;
            sum = nums[first];
            add = nums[first];   // FIX 1

            if (add == k) {      // count single element subarray
                p++;
            }

            while (second < nums.size()) {
                add = add + nums[second];   // FIX 2
                sum = sum + nums[second];

                
                if (sum == k) {
                    p++;
                }

                second++;   // FIX 3 (only one increment)
            }

            first++;
            add = 0;
        }

        return p;
    }
};
