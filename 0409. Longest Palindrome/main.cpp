#include <string>

class Solution {
public:
    int longestPalindrome(std::string s) {
        int arr[52] = {0};
        for(int i=0; i<s.size(); i++) {
            if(int(s[i]) >= 65 && int(s[i]) <= 90) arr[(int)(s[i])-65] += 1;
            else if(int(s[i]) >= 97 && int(s[i]) <= 122) arr[(int)(s[i])-71] += 1;
        }
        int res=0, index=-1;
        for(int i=0; i<52; i++) {
            if(index == -1 && arr[i]%2!=0) { res+=arr[i]; index=i; }
            if(arr[i]%2==0 && i != index) res+=arr[i];
            else if(i != index) res+=arr[i]-1;
        }
        return res;
    }
};