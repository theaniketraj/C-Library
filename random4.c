#include<stdio.h>

int x;
int y;

int main(){
    printf("Enter two numbers x and y\n");
    scanf("%1d%1d", &x,&y);
    printf("The sum of the numbers is %1d\n", x + y);

    printf("Enter two numbers x and y\n");
    scanf("%1d%1d", &x,&y);
    printf("The difference of the numbers is %1d\n", x - y);

    printf("Enter two numbers x and y\n");
    scanf("%1d%1d", &x,&y);
    printf("The product of the numbers is %1d\n", x * y);

    printf("Enter two numbers x and y\n");
    scanf("%1d%1d", &x,&y);
    printf("The division of the numbers is %d\n", x / y);

    return 0;
} 