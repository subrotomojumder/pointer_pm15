#include <stdio.h>
int main()
{
    int x = 10;
    printf("%d\n", x);

    printf("%p\n", &x); // address print of x variable

    int *ptr;
    ptr = &x;
    printf("%p\n", ptr);
    printf("%p", &ptr);
    return 0;
}