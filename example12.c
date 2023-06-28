#include<stdio.h>
union emp
{
    int id;
    char name[20];
} e1;
int main( int argc, char *argv[] )
{
    e1.id = 10;
    printf("\n ID: %d", e1.id);
    printf(e1.name, "AB");
    printf("\n Name: %s", e1.name);
    return 0;
}
