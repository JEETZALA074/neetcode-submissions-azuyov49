class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
int x;
int y;
        x = nums.size()/2;

        y = nums[x];

        return y;
    }
};