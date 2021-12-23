#include <stdio.h>
#include <stdlib.h>

int main()
{
    char **p;
    p = (char **)malloc(100);
    p[0] = (char *)"Apple";      // or write *p, points to location of 'A'
    p[1] = (char *)"Banana";     // or write *(p+1), points to location of 'B'

    printf("%s", *p);          //Prints the first pointer location until it finds '\0'
    printf("%p", **p);          //Prints the exact character which is being pointed
    *p++;                        //Increments for the next string
    printf("%p", **p);
    return 0;
}