#include <vector>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int maxs=0, l=0, r=height.size()-1;
        while(l!=r) {
            maxs = std::max(maxs, abs(l-r) * std::min(height[l], height[r]));
            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxs;
    }
};