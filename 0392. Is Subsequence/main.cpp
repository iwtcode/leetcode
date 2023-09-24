#include <string>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int index = 0;
        for (int i=0; i<t.size(); ++i) if(s[index] == t[i]) ++index;
        return index == s.size();
    }
};