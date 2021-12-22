#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool isPalindrome(int x){
    
    int y=x;
    bool answer = 1;
    if(x < 0){
        answer = 0;
        return answer;
    }
    int count =0;
    do {
    y /= 10;
    ++count;
    } while (y != 0);
    int j = count-1;
    char s[count];
    sprintf(s, "%d", x);
    
    for(int i= 0; i<count; i++ ){
        //for(int j=count-1; j>=0; j--){
            if(s[i] == s[j])
            {
                if(j>=-1){
                j--;
                }
                continue;
            }
            else{
                answer = 0;
            }
        //}
    }
    
    return answer;
}

int main(){
    int x = 101;
    isPalindrome(x);
    return 0;
}