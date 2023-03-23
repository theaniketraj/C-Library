#include<stdio.h>


int main(){
    int a,b;
    printf("Enter two number a & b\n");
    scanf("%d%d", &a,&b);
    printf("Sum is %d\n", a + b);
    // printf("Enter two number a & b");
    // scanf("%d%d", &a,&b);
    // printf("Difference is %d\n", a - b);
    printf("The substrction of %d and %d is %d\n",a,b,(a-b));
    printf("the product of %d and %d is %d\n",a,b, a*b);
    printf("The division of %d and %d is %d\n",a,b, a/b);
    return 0;
} 