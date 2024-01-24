#include <vector>

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int first = -1;
        int last = -1;

        // Finding the lower bound
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Finding the upper bound
        low = 0;
        high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] <= target) {
                last = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Checking if the target is found
        if (first != -1 && last != -1) {
            return {first, last};
        } else {
            return {-1, -1};  // Target not found
        }
    }
};
