#include<stdio.h>

int main()
{
    int x = 50, y = 70;
    interchange(x,y);
    printf("x=%d y=%d", x,y);
}
interchange(x1,y1)
int x1,y1;
{
    int z1;
    z1 = x1;
    x1 = y1;
    y1 = z1;
    printf("x1=%d y1=%d", x1, y1);
}
