#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLongestSubstring(char *s){
    int offset[128]; //number of ASCII characters
    int substr_max_len = 0;
    int len = 0;
    int index = 0;
    //memset(offset, 0xff,sizeof(offset)); //setting off values of offset array; 0xff =255dec=-1 in 8bit char
    memset(offset, -1,sizeof(offset));

    while( *s != '\0'){
        if(offset[*s]==-1){
            len++;
        }else{
            if(index - offset[*s] > len){
            len++;
            }else{
                len = index -offset[*s]; //sets the length when there's no repetition
            }
        }
        if(len> substr_max_len){
            substr_max_len = len;
        }
        offset[*s++] = index++;
    }
    return substr_max_len;
}

int main(){
    char *a = "abcabcbb";
    //char *b = "bbbbb";
    //char *c = "pwwkew";
    printf("Strings: %s\n", a);
    //printf("Longest substrings: %d, %d, %d\n", lengthOfLongestSubstring(a), lengthOfLongestSubstring(b), lengthOfLongestSubstring(c));
    printf("Longest substrings: %d\n", lengthOfLongestSubstring(a));
    return 0;
}