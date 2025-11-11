#include<stdio.h>
void fun(int a[], int n){
    a[1] =  200;
    // printf("From Fun => %p\n", a);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    
    // int x[5] = {10, 20, 30, 40, 50};
    fun(x, n);
    // printf("From Main => %p\n", x);
    // printf("%d", x[1]);
    return 0;
}