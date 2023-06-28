// Using pointer write a function that will calculate maximum and minimum of a given set of numbers.

#include<stdio.h>
#include<conio.h>

main()
{
    int Ar[6], i, t, max, min;
    for ( i = 0; i < 6; i++ )
    {
        printf("Enter %dth data ", i);
        scanf("%d", &Ar[i]);
    }
    max = min = Ar[0];
    for ( i = 0; i < 6; i++ )
    {
        if ( Ar[i] > max )
        max = Ar[i];
        if ( Ar[i] < min )
        min = Ar[i];
    }
    printf("The highest no. is %d and minimum is %d . ", max, min);
    return 0;
}
