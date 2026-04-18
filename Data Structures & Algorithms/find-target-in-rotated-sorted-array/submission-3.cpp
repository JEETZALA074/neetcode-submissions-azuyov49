class Solution {
public:
    int canFinish(vector<int>& nums, int low, int high, int target) {
        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        if (nums.size() == 1) {
            return nums[0] == target ? 0 : -1;
        }

        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }

        int pivot = start;
        int last = nums.size() - 1;

        int left = canFinish(nums, 0, pivot - 1, target);
        if (left != -1) return left;

        int right = canFinish(nums, pivot, last, target);
        if (right != -1) return right;

        return -1;
    }
};