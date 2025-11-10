#include<stdio.h>
int main(){
    int a[5] = {10, 20, 30, 40, 50};

    // value assign by dereference
    *a = 100;
    *(a + 2) = 300; // array pointer er sate 8 byte increment kore value set korbe

    printf("Zero index's address: %p\n", &a[0]); // 0nt index address

    printf("Array address: %p\n", a); // array address

    printf("Array first value: %d\n", *a); // array first value

    printf("Array 2nt index's value: %d\n", a[2]); // array first value

    return 0;
}