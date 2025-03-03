/*Documentiation
  Sai Chandu
  02-12-24
  sample input:8
  sample output:0,1,1,2,3,5,8
  Description:generate fibbonacci numbers using recursion
*/  
#include <stdio.h>

void positive_fibonacci(int, int, int, int);   //function prototype

int main()
{
    int limit;
    
    //printf("Enter the limit : ");
    scanf("%d", &limit);
    
    positive_fibonacci(limit, 0, 1, 0);     //function call
}
void positive_fibonacci(int n,int first,int current,int next)     //function definition
{
    if(n>=0)
    {
        if(next<=n)
        {
           first=current;
           current=next;
           printf("%d, ",next);
           next=first+current;
           positive_fibonacci(n,first,current,next);            //recurision(function call itself)
        }
    }
    else
    {
        printf("Invalid input");
    }
}