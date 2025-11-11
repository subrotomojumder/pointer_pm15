#include<stdio.h>
void read_fun(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    read_fun(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}