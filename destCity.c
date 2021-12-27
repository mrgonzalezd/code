#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* char **p;                    //initialize pointer
    p = (char **)malloc(100);    //allocate memory for the pointer
    p[0] = (char *)"Apple";      // or write *p, points to location of 'A'
    p[1] = (char *)"Banana";     // or write *(p+1), points to location of 'B'

    printf("%s\n", *p);          //Prints the first pointer location until it finds '\0'
    printf("%p\n", **p);          //Prints the exact character which is being pointed
    *p++;                        //Increments for the next string
    printf("%p\n", **p); */
    char ***paths;
    paths = (char ***)malloc(100);
    paths[0] = (char **) "B";
    
    paths[1] = (char **) "C";
    return 0;
}