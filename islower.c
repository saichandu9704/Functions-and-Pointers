/*Documentiation
  Sai chandu
  18/11/2024
  sample input:a
  sample output:Entered character is lower case character
  Description:print lower case character or not
*/  
#include <stdio.h>

int my_islower(char);        //function prototype

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_islower(ch);      //function calling
    if(ret==1)
    {
        printf("Entered character is lower case alphabet\n");
    }
    else
    {
        printf("Entered character is not lower case alphabet\n");
    }
    return 0;
}
int my_islower(char ch)         //function definition
{
    if(ch >= 'a' && ch <='z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}