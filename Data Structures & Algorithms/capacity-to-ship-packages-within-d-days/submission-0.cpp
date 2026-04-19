class Solution {
public:
    bool canFinish(vector<int>& weights, int k, int days) {
        int i = 0;
        int n = weights.size();
        int usedDays = 1;
        int curr = 0;

        while (i < n) {
            if (curr + weights[i] > k) {
                usedDays++;
                curr = 0;
            }
            curr += weights[i];
            i++;
        }

        return usedDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(), weights.end());
        int hi = accumulate(weights.begin(), weights.end(), 0);

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            if (canFinish(weights, mid, days)) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }

        return lo;
    }
};