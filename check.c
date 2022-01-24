#include <stdio.h>
int check( char *ptr);

void check2( char **ptr) {
char *new_ptr = "Yellow";
//ptr="Yellow";
*ptr = new_ptr;
}

int check3( char **ptr) {
char *new_ptr = "Yellow";
//ptr="Yellow";
*ptr = new_ptr;
return 0;
}

int main() {
char *ptr="Blue";
check3(&ptr);
printf("%s \n",ptr);
return 0;
}

int check( char *ptr) {
ptr="Yellow";
return 0;
}

