class Solution {
public:
    int mySqrt(int x) {
        int start = 1, end = x;
        long long j = x;

        while (start <= end) {
            long long mid = start + (end - start) / 2;
            
if(x==0)

{
    return 0;
}
            if (mid == j/mid) {
                return mid;
            } 
            else if (mid <= j/mid) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }

        return end; 
    }
};