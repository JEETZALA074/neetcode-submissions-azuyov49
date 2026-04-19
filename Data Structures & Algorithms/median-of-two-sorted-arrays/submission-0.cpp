class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> all;
        int a = 0, b = 0;

        int n1 = nums1.size();
        int n2 = nums2.size();

     
        while (a < n1 && b < n2) {
            if (nums1[a] < nums2[b]) {
                all.push_back(nums1[a++]);
            } else {
                all.push_back(nums2[b++]);
            }
        }

       
        while (a < n1) {
            all.push_back(nums1[a++]);
        }

        while (b < n2) {
            all.push_back(nums2[b++]);
        }

        int n = all.size();

        if (n % 2 == 0) {
            return (all[n/2 - 1] + all[n/2]) / 2.0;
        } else {
            return all[n/2];
        }
    }
};