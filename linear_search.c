#include<stdio.h>
int main()
{
    int arr[50],i,n,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    i=0;
    while(i<n&&arr[i]!=x)

    {
        i++;
    }
    if(i==n)
        printf("Not found\n");
    else
        printf("%d is in index %d\n",x,i);
    return 0;
}
