#include<stdio.h>

int main(){
    int physics, chemistry, maths;
    float total;
    
    printf("Enter physics marks\n");
    scanf("%d", &physics);

    printf("Enter chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Enter maths marks\n");
    scanf("%d", &maths);

    total = ( physics + chemistry + maths)/3;
    if ((total<40) || physics < 33 || chemistry < 33 || maths < 33 ){
        printf("Your total percentage is %f and you're failed", total);
    }
    else{
        printf("Your total percentage is %f and you're passed", total);
    }
    return 0;
} 