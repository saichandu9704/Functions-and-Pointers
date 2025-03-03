/*Documentiation
  Sai Chandu
  04-12-24
  sample input:5
  sample output:120
  Description:generate factorial of number using recursion
*/  
#include <stdio.h>

int main()
{
    static int num=0;;
    static unsigned long long int fact = 1;
    if(num==0)
    {
        //printf("Enter number the value of N: ");
        scanf("%d",&num);
    }
    //finding factorial
    if(num==0)
    {
        printf("Factorial of the given number is %lld",fact);
    }
    else if(num>0)
    {
        fact=fact*num;
        num--;
        if(num>1)
        {
            main();
        }
        else
        {
            printf("Factorial of the given number is %lld",fact);
        }
    }
    else
    {
        printf("Invalid Input");
    }
}