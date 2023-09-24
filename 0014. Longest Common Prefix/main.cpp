#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        int minl = strs[0].length(), k;
        std::string maxs = "";
        for(int i = 0; i<minl; i++) {
            if(i>=minl) return maxs;
            for(int k = 1; k<strs.size(); k++) {
                if(i>=strs[k].length()) return maxs;
                if(strs[k][i]!=strs[0][i]) return maxs;
            }
            maxs += strs[0][i];
        }
        return maxs;
    }
};