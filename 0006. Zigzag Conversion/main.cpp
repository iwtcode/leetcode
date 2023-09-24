#include <string>

class Solution {
public:
    std::string convert(std::string s, int numRows) {
        if(s.size()<3 || numRows==1) return s;
        int p;
        std::string ns;
        ns = s[0];
        p=numRows*2-2;
        while(p<s.size()) {
            ns += s[p];
            p+=numRows*2-2;
        }
        for(int i = 1; i<numRows-1; i++) {
            if(i<s.size()) {
                ns += s[i];
                p=i+numRows*2-2-i*2;
                while(p<s.size()) {
                    ns += s[p];
                    p+=i*2;
                    if(p<s.size()) ns += s[p];
                    p+=numRows*2-2-i*2;
                }
            }
        }
        if(numRows<=s.size()) {
            ns += s[numRows-1];
            p=numRows*3-3;
            while(p<s.size()) {
                ns += s[p];
                p+=numRows*2-2;
            }
        }

        return ns;
    }
};