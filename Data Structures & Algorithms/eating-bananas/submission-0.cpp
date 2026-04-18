class Solution {
public:
    bool canFinish(vector<int>& piles, long long k, int h) {
        long long hours = 0;
        for (int p : piles) {
            hours += ceil((double)p / k);
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1, hi = *max_element(piles.begin(), piles.end());

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            if (canFinish(piles, mid, h)) {
                hi = mid;       
            } else {
                lo = mid + 1;   
            }
        }

        return lo;
    }
};
