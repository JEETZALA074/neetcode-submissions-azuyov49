class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k = k % n;
        if (k == 0) return;

        int p = n - k;
        int x =  p - 1;   

        vector<int> firsthalf(nums.begin(), nums.begin() + x +1 );
        vector<int> secondhalf(nums.begin() + x + 1, nums.end());

        int fi = 0;
        int li = firsthalf.size();
        while (fi < li) {
            secondhalf.push_back(firsthalf[fi]);
            fi++;
        }

        nums = secondhalf;
    }
};
