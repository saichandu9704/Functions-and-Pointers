/*Documentiation
  Sai Chandu
  20-11-24
  Sample input:20
  Sample output:2 3 5 7 11 13 17 19
  Description:print prime numbers until limit using function
*/  
#include <stdio.h>

int is_prime(int,int);
void generate_prime(int);

int main()
{
    int limit;
    //printf("Enter a number:");
    scanf("%d",&limit);
    if(limit<=1)
    {
        printf("Invalid input");
    }
    else
    {
       
        generate_prime(limit);
    }
    return 0;
}
void generate_prime(int limit)
{
    for(int i=2;i<=limit;i++)
    {
        if(is_prime(limit,i))
        {
            printf("%d ",i);
        }
    }
}
int is_prime(int limit,int j)
{
    for(int i=2;i*i<=limit;i++)
    {
        if(i!=j && j%i==0)
        {
            return 0;
        }
        if(i*i>limit)
        {
            return 1;
        }
    }
}