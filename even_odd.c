#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    if(n%2==0){
        printf("Your number is even\n");//another form od if_else
                                        //(n%2==0)?(Your number is even):(Your number is odd);
    }
    else{
        printf("Your number is odd\n");
    }
    return 0;
}