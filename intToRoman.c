#include <stdio.h>
#include <string.h>
#include <math.h>


char* intToRoman(int num){
    char *s = (char *)malloc(sizeof(char) * 50);
    char s[0] = '\0';
    int quotient = 0;
    int dividend[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char romanStr[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    for(int i=12; i >= 0; i--){
        quotient = num/dividend[i];
        while(quotient>0){
            strcat(s, romanStr[i]);
            quotient--;
        }
        num = num % dividend[i];
    }
    return s;
}
int main(){
    int num = 1900;
    intToRoman(num);
}