#include<stdio.h>
int main(){
    int x = 10;
    // printf("%d", x);

    int *ptr;
    ptr = &x;
    printf("%p\n", ptr);

    // dereferencing pointer
    *ptr = 200; // variable value assign by pointer
     printf("%d\n", *ptr); // variable value print by pointer



     char y = 'h';
     char *cPtr ;
     cPtr = &y;
     printf("%p\n", cPtr);
     printf("%c", *cPtr);
    return 0;
}