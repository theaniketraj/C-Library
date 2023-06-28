// Input an M-digit number. Print its digit one by one. ( least significant bit first )

#include<stdio.h>
int main()
{
    int n, a = 0;
    printf("Enter a number \n");
    scanf("%d", &n);
    while ( n != 0 );
    {
        a = a * 10;
        a = a + n % 10;
        n = n / 10;
    }
    printf("Printing digits by least significant bit first is = %d\n", a);
    return 0;
}
