#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int left = 0, right = nums.size(), mid;
        if(target > nums[right - 1]) return right;
        while (right >= left) {
            mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return left;
    }
};