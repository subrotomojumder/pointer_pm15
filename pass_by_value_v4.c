#include<stdio.h>
void fun(int x){
    x = 20;
    printf("Fun => %d\n", x);
    printf("Fun X => %p\n", &x);
}
int main(){
    int x = 10;
    fun(x);
    printf("Main => %d\n", x);
    printf("Main X => %p\n", &x);
    return 0;
}