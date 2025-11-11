#include<stdio.h>
void fun (char s[]){
     printf("%s", s);
}
int main(){
    char str[10];
    scanf("%s", str); // string er name address reference kore tai ampersand use korte hoina scan korte
    fun(str);
    // printf("%s", str);
    return 0;
}