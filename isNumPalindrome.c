#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isPalindrome(int x){
    bool answer;
    int count;
    do {
    x /= 10;
    ++count;
    } while (x != 0);
    char s[count];
    sprintf(s, %d, x);
    while(int i= 0; i<count; i++ ){
        
    }
    
    return answer;
}

int main(){
    int x = 10;
    isPalindrome(x);
    return 0;
}