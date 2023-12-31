#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int max2=arr[1];
    if(max<max2)
    {
        max=max2;
    }
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max2=max;
            max=arr[i];
        }   
        else if(max2<arr[i])
        {
            max2=arr[i];
        }
    }
    printf("Second greatest element: %d",max2);
}