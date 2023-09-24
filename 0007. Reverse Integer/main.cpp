#include <iostream>
#include <string>

class Solution {
public:
    int reverse(int x) {
        std::string s = std::to_string(x);
        int l = s.size();
        for(int i=0;i<l/2;i++) {
            s[i] ^= s[l-i-1];
            s[l-i-1] ^= s[i];
            s[i] ^= s[l-i-1];
        }
        try {x = x < 0 ? -stoi(s) : stoi(s);}
        catch (std::out_of_range) {return 0;}
        return x;
    }
};