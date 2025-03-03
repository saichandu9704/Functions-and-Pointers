/*Documentiation
  Sai Chandu
  04-12-24
  sample input:-8
  sample output:0,1,-1,2,-3,5,-8
  Description:generate negative fibbonacci numbers using recursion
*/  
#include <stdio.h>

void negative_fibonacci(int, int, int, int);   //function prototype

int main()
{
    int limit;
    
    //printf("Enter the limit : ");
    scanf("%d", &limit);
    if(limit<=0)
    {
       negative_fibonacci(limit, 0, 1, 0);         //function call
    }
    else
    {
        printf("Invalid input");
    }
}
void negative_fibonacci(int n,int first,int current,int next)     //function definition
{
    if(first>=n && first<=(-n))
    {
        printf("%d, ",first);
        next=first-current;
        first=current;
        current=next;
        negative_fibonacci(n,first,current,next);     //recurision(function call itself)
    }
}