// while (a>10){ ---> This will lead to an infinite loop
#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    // a = 11;
    // while (a>10){ ---> These two lines will lead to an infinite loop
    while(a>10)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
} 