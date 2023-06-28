/* 
malloc(): The name "malloc" stands for memory allocation. The malloc() function reserves a block of memory of the specified
number of bytes. It returns a pointer of type void which can be casted into pointer of any form.
malloc function allocates memory at runtime. It's defined in stdli.h .
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char name[20];
    char *address;
    strcpy ( name, "Come Here");
    address = ( char* ) malloc( 50*sizeof (char) ); /* allocating memory dynamically */
    strcpy ( address, "Kolkata" );
    printf("Name = %s\n", name);
    printf("Address: %s\n", address);
    return 0;
}
