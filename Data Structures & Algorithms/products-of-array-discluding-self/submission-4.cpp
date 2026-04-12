class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int first = 0;
        int second = 0;
        int x = 1;
        vector<int> abc;

        while (first < nums.size()) {
            // reset for each 'first'
            x = 1;
            second = 0;

            while (second < nums.size()) {
                if (second != first) {
                    x = x * nums[second];
                }
                second++;           // increment exactly once
            }

            abc.push_back(x);
            first++;
        }
        return abc;
    }
};

