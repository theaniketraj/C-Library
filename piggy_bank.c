/*Determine how much money is in a piggy bank that contains several 50, 25, 20, 20, 10 and 5 paise coins.
Use the following values to test the program; five 50 paise, three 20 paise, two 20 paise, one 10 paise and fifteen 5 paise.*/

#include<stdio.h>
#include<conio.h>

main()
{
    int n1, n2, n3, n4, n5;
    float m;
    // clrscr();
    printf("Enter the number of coins of 50 paisa, 25 paisa, 20 paisa and 10 paisa respectively : ");
    scanf("%d%d%d%d%d", n1, n2, n3, n4, n5);
    m = ( n1 * 0.5 ) + ( n2 * 0.25 ) + ( n3 * 0.2 ) + ( n4 * 0.1 ) + ( n5 * 0.05 );
    printf("The total amount of money is %f", m);
    getch();
    return 0;
}
