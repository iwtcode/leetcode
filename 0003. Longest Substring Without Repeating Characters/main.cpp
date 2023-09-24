#include <string.h>

int lengthOfLongestSubstring(char * s){
    if (strlen(s)==0) return 0;
    int lsub=1, max=1;
    int chrs[128] = {0};
    for(int i=0; i<strlen(s)-1; i++) {
        chrs[s[i]] = 1;
        for(int j=i; j<strlen(s)-1; j++) {
            chrs[s[j+1]]++;
            if(s[j] != s[j+1] && chrs[s[j+1]]<=1) {
                lsub++;
            }
            else break;
        }
        if (lsub > max) max = lsub;
        lsub=1;
        memset(chrs, 0, sizeof(chrs));
    }
    return max;
}