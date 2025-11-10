#include<stdio.h>
void fun(int a[]){
    a[1] =  50;
}

int main(){
    int x[5] = {10, 20, 30, 40, 50};
    fun(x);
    printf("%d", x[1]);
    return 0;
}