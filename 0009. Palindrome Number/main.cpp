#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        int ln = s.length();
        for (int i=0; i<ln/2; i++) {
            if (s[i] != s[ln-i-1]) return false;
        }
        return true;
        }
};