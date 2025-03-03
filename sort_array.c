/*Documentiation
  Sai Chandu
  27-11-24
  Sample input:size=5,elements:10 1 3 8 -1
  Sample output:After sorting: -1 1 3 8 10
  Description:sorting array without modifying or copying array
*/  
#include <stdio.h>
void print_sort(int [], int);      //function prototype
int main()
{
    int size, iter;
    //printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    //printf("Enter the %d elements:\n",size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    printf("After sorting ");
    
    print_sort(arr, size);      //function calling
    
    printf("\n");
    printf("Original array values ");
    for(iter = 0; iter < size; iter++)
    {
        printf("%d ", arr[iter]);
    }
    return 0;
}
void print_sort(int arr[],int n)     //function definition
{
    int small=arr[0],large=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    int sec_small=arr[0];
    printf("%d ",small);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>small && arr[j]<sec_small)
            {
               sec_small=arr[j];
            }
        }
        if(sec_small!=small)
        {
           printf("%d ",sec_small);
        }
        small=sec_small;
        sec_small=large;
    }
}