#include<stdio.h>
void swap_fun(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    swap_fun(&x, &y);
    printf("X=> %d\nY=> %d\n", x, y);
    return 0;
}