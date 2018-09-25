#include<stdio.h>
int main()
{
    int arr[50],i,j,n,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("%d is found in index: %d\n",x,i);
            break;
        }
    }
    if(i==n)
        printf("Not found\n");

    return 0;
}
