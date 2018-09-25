#include<stdio.h>
int main()
{
    int arr[50],i,n,index,value;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Index: ");
    scanf("%d",&index);
    while(index<n)
    {
        arr[index]=arr[index+1];
        index++;
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
