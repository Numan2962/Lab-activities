#include<stdio.h>
void insertion(int arr[],int n)
{
    int i,j,c;
    for(i=1;i<n;i++)
    {
       c=arr[i];
       j=i-1;
       while(j>=0&&arr[j]>c)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=c;
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
    insertion(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
