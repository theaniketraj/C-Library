#include<stdio.h>
// p = principal
// r = rate
// t = time
// sI = simple Interest 
int main(){
    int p,t;
    float r,s;
    printf("Enter the value of principal\n");
    scanf("%d", &p);
    printf("Enter the value of rate\n");
    scanf("%f", &r);
    printf("Enter the value of time\n");
    scanf("%d", &t);
    s=(p*r*t)/100;
    printf("print the value of simple Interest %f\n" , s);
    return 0;
} 