/*Documentiation
  Sai chandu
  18/11/2024
  sample input:$
  sample output:Entered character is punctuation character
  Description:print punct character or not
*/  
#include <stdio.h>

int my_ispunct(char);        //function prototype

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);       //function calling
    if(ret==1)
    {
        printf("Entered character is punctuation character");
    }
    else
    {
        printf("Entered character is not punctuation character");
    }
}
//function definition
int my_ispunct(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
