#include <stdio.h>
int check( char *ptr);
void check2( char *ptr);

void check2( char *ptr) {
ptr="Yellow";
}

int main() {
char *ptr="Blue";
check2(ptr);
printf("%s \n",ptr);
return 0;
}

int check( char *ptr) {
ptr="Yellow";
return 0;
}

