#include <string>

class Solution {
public:
    std::string longestPalindrome(std::string s) {
        std::string maxl;
        int p;
        for(int i=0; i<s.size(); i++) {
            p=0;
            while(i-p>=0 && i+p<s.size() && s[i-p] == s[i+p]) {
                if(p*2+1>maxl.size()) maxl = s.substr(i-p, p*2+1);
                p++;
            }
            p=0;
            while(i-p>=0 && i+1+p<s.size() && s[i-p] == s[i+1+p]) {
                if(p*2+2>maxl.size()) maxl = s.substr(i-p, p*2+2);
                p++;
            }
        }
        return maxl;
    }
};