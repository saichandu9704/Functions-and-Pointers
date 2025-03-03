/*Documentiation
  Sai chandu
  18/11/2024
  sample input:a
  sample output:Entered character is alnum character
  Description:print alnum character or not
*/  
#include <stdio.h>

int my_isalnum(char);       //function prototype

int main()
{
    char ch;
    int ret;
    printf("Enter the character:\n");
    scanf("%c", &ch);
    ret = my_isalnum(ch);     //function calling
    if(ret==1)
    {
        printf("Entered character is alphanumeric character");
    }
    else
    {
        printf("Entered character is not alphanumeric character");
    }
}
int my_isalnum(char ch)         //function definition
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return 1;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        return 1;
    }
    else if(ch >= '0' && ch <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}