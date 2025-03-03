/*Documentiation
  Sai Chandu
  26-11-24
  sample input:size=5,elements=5 1 3 1 5
  sample out put:5 1 3
  Description:Remove duplicates and print new array
*/  
#include <stdio.h>
void fun(int arr1[], int size, int arr2[], int *new_size);   //functionn protype
int main()
{
    int size,count=0;
    printf("Enter size:");
    scanf("%d",&size);
    int arr1[size],arr2[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    fun(arr1,size,arr2,&count);          //function calling
    printf("After removing duplicates: ");
    for(int i=0;i<count;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
void fun(int arr1[],int s,int arr2[],int *new_size)      //function definition
{
    for(int i=0;i<s;i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            if(arr1[i]==arr1[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            arr2[*new_size]=arr1[i];
            (*new_size)++;
        }
    }
}