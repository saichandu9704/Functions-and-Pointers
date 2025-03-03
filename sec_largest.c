/*Documentiation
  Sai Chandu
  25/11/24
  sample input:10 30 20 50 40
  sample output:40
  Description:finding the second largest elements
*/  
#include <stdio.h>
int sec_largest(int [], int);      //function prototype
int main()
{
    int size,ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //funtion call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}
//function definition
int sec_largest(int arr[],int size)
{
    int largest=arr[0],smallest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    int sec_largest=smallest;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>sec_largest && arr[i]<largest)
        {
            sec_largest=arr[i];
        }
    }
    return sec_largest;
}