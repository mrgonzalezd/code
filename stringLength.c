#include <stdio.h>

int countString(const char *string){
    const char *endString = string;
    //int count = 0;
    while(*endString){
        //count++;
        //++string;
        ++endString;
    }
    
    return endString - string;
}


int main()
{
    char string1[] = "String";
    printf("%d\n", countString(string1));
    printf("%d\n", countString("\0"));

    return 0;
}