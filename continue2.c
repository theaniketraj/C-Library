#include<stdio.h>

int main(){
    int skip=5,i=0;
    i++;
    while(i<10){
        if(i!=5){
            continue;
        }
        else{
            printf("%d\n", i);
        }
    }
    
    return 0;
}