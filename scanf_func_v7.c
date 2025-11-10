#include<stdio.h>

// scanf(int *x)
//{
// how to set value code.
// x er reference e vlaue set korbe
//}

int main(){
    int x ;
    scanf("%d", &x); // x var er reference ke scanf e pathano hoiyece, karon main er x er value assign korbe.
    printf("%d", x); // x ekhane sudu value ke pass korle hobe tai emparsin use korte hoi nai.
    return 0;
}