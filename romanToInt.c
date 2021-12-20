#include <stdio.h>

int romanToInt(char *s){
    int number = 0;
    while( *s != '\0'){
        switch (*s)
        {
        case 'M':
            number += 1000;
            break;
        case 'D':
            number += 500;
            break;
        case 'C':
            if(*(s+1) == 'M'){
                number += 900;
                *s++;
            }else if(*(s+1) == 'D'){
                number += 400;
                *s++;
            }else{
            number += 100;
            }
            break;
        case 'L':
            number += 50;
            break;
        case 'X':
            if(*(s+1) == 'C'){
                number += 90;
                *s++;
            }else if(*(s+1) == 'L'){
                number += 40;
                *s++;
            }
            else{
            number += 10;
            }
            break;
        case 'V':
            number += 5;
            break;
        case 'I':
            if(*(s+1) == 'V'){ //why does *s++ move the string ahead?
                number += 4;
                *s++;
                break;
            }else if(*(s+1) == 'X'){
                number += 9;
                *s++;
                break;
            }else{
            number += 1;
            break;
            }
        default:
            break;
        }
        *s++;
    }

    return number;
}

int main(){

    char *s = "MCMXCIV";
    romanToInt(s);
    return 0;
}