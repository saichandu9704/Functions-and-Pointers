/*Documentiation
  Sai chandu
  18/11/2024
  sample input:a
  sample output:Entered character is an hexadecimal digit
  Description:print hexadecimal digit or not
*/  
#include <stdio.h>

int my_isdigit(char);       //function prototype

int main()
{
    char ch;
    int ret;
    printf("Enter the character:\n");
    scanf("%c", &ch);
    ret = my_isdigit(ch);     //function calling
    if(ret==1)
    {
        printf("Entered character is an hexadecimal digit");
    }
    else
    {
        printf("Entered character is not an hexadecimal digit");
    }
    return 0;
}
int my_isdigit(char ch)         //function definition
{
    if(ch >= 'A' && ch <= 'F' || ch >= 'a' && ch <= 'f' || ch >= '0' && ch <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

