/*Documentiation
  Sai Chandu
  25/11/24
  sample input:10 30 20 50 40
  sample output:30
  Description:finding the third largest elements
*/  
#include <stdio.h>
int third_largest(int [], int);      //function prototype
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
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}
//function definition
int third_largest(int arr[],int size)
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
    int third_largest=smallest;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>third_largest && arr[i]<sec_largest)
        {
            third_largest=arr[i];
        }
    }
    return third_largest;
}