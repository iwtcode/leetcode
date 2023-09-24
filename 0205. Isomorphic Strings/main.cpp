#include <string.h>

bool isIsomorphic(char * s, char * t){
    int d1[127]={0};
    int d2[127]={0};
    int n = strlen(s);
    for(int i=0; i<n; i++) {
        if(d1[s[i]]!=d2[t[i]]) return false;
        d1[s[i]]=d2[t[i]]=i+1;
    }
    return true;
}