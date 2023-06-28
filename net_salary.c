/* In an organization, 55% of Basic Salary is given as DA while HRA is 15% of Basic Salary. 
PF is deducted at the rate of 12.5% of Gross Salary. Write a C Program to calculate Net Salary.
[Gross Salary = Basic + DA + HRA and Net Salary = Gross Salary - PF]*/
// Program to find Net Salary

#include<stdio.h>

void main()
{
    float basic, da, hra, gross, pf, net;
    printf("\nEnter Basic Salary : ");
    scanf("%f", &basic);
    da = basic * 0.55;
    hra = basic * 0.15;
    gross = basic + da + hra;
    pf = gross * 0.125;
    net = gross - pf;
    printf("\nNet Salary = %.2f", net);
    
}
