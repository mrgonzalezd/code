#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char * s){
    if(strlen(s) == 0)
        return 0;

    char *letters = s;
    int window = 1;
    int max_count = 1;
    int i, j;
    int n = strlen(s);
    for(j=1; j<n; j++){
        for(i=0; i<window; i++){
            if(s[j] == letters[i]){
                letters += (i+1);
                window -= (i+1);
                break;
            }
        }
        window += 1;
        if(window > max_count)
            max_count = window;
    }

    return max_count;
}
int main(){
    char *a = "abcabcbb";
    char *b = "bbbbb";
    char *c = "pwwkew";
    printf("Strings: %s, %s, %s\n", a, b, c);
    //printf("Longest substrings: %d, %d, %d\n", lengthOfLongestSubstring(a), lengthOfLongestSubstring(b), lengthOfLongestSubstring(c));
    printf("Longest substrings: %d\n", lengthOfLongestSubstring(a));
    return 0;
}