#include<stdio.h>
void fun(int *ptr){
    *ptr = 20; // value assign in main x by reference
    printf("Fun => %d\n", *ptr);
    printf("Fun X => %p\n", &ptr);
}

int main(){
    int x = 10;
    fun(&x);
    printf("Main => %d\n", x);
    printf("Main X => %p\n", &x);
    return 0;
}