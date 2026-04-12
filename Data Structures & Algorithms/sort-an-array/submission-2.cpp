class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return nums;

        int s = 0;
        int e = n - 1;
        int m = s + (e - s) / 2;

      
        vector<int> left(nums.begin(), nums.begin() + m + 1);
        vector<int> right(nums.begin() + m + 1, nums.end());

        left = sortArray(left);
        right = sortArray(right);

      
        vector<int> ans;
        int i = 0, j = 0;

        while(i < left.size() && j < right.size()) {
            if(left[i] <= right[j]) {
                ans.push_back(left[i]);
                i++;
            } else {
                ans.push_back(right[j]);
                j++;
            }
        }

        while(i < left.size()) {
            ans.push_back(left[i]);
            i++;
        }

        while(j < right.size()) {
            ans.push_back(right[j]);
            j++;
        }

        return ans;
    }
};
