class Solution {
public:
    int mySqrt(int x) {
        int start = 0, end = x;
        long long j = x;

        while (start <= end) {
            long long mid = start + (end - start) / 2;
            long long sq = mid * mid;

            if (sq == j) {
                return mid;
            } 
            else if (sq < j) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }

        return end; 
    }
};