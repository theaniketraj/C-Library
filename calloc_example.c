/*
calloc(): The name "calloc" stands for contiguous allocation. The calloc() allocates multiple blocks of memory and initializes them
to zero. Calloc also alloactes memory at runtime and it's defined in stdli.h . It takes the number of elements and the size of each
elements ( in bytes ); initializes each element to zero and then returns a void pointer to the memory.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, *p;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    p = ( int* ) calloc ( n, sizeof ( int ) );
    if ( p == NULL )
    {
        printf("memory cannot be alloacted \n");
    }
    else
    {
        printf("Elements of array are\n");
        for ( i = 0; i < n; i++ )
        {
            printf("%d\n", * ( p + i ) );
        }
    }
    return 0;
}
