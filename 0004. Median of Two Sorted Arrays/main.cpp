#include <vector>
#include <algorithm>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int n = nums1.size()+nums2.size();
        int *nums = new int[n];
        for(int i=0; i<nums1.size(); i++) nums[i] = nums1[i];
        for(int i=0; i<nums2.size(); i++) nums[i+nums1.size()] = nums2[i];
        std::sort(nums, nums+n);
        if(n%2!=0) return nums[n/2];
        else return (nums[n/2-1]+nums[n/2])/2.;
    }
};