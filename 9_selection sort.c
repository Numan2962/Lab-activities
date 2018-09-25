#include<stdio.h>
void selection(int arr[],int n)
{
    int i,j,min,t;
    for(i=0;i<n;i++)
    {
       min=i;
       for(j=i+1;j<n;j++)
       {
           if(arr[j]<arr[min])
           {
               min=j;
           }
       }
       if(i!=min)
       {
           t=arr[min];
           arr[min]=arr[i];
           arr[i]=t;
       }
    }
}
int main()
{
    int arr[50],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
