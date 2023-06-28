// Write a program which passes string "This is a test" in command line and print those arguments one by one and 
// also print the number of arguments.

#include<stdio.h>
/*
* Print Arguments function
*
* argc : Number of arguments
* argv : Argument array
* Returns 0 on success, -1 on error
*/
int print_args(int argc, char **argv);
int main(int argc, char * argv[])
{
    printf("Display all arguments!\n");
    print_args( argc, argv );
    return 0;
}

int print_args( int argc, char **argv )
{
    int i;
    for ( i = 0; i < argc; i++ )
    {
        printf("Argument %d = \ "%s\"\n", i, argv[i]);
    }
    return 0;
}
