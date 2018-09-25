#include<stdio.h>
int main()
{
    int arr[50],i,j,n,v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("value: ");
    scanf("%d",&v);
    for(i=0;i<n;i++)
    {
      if(arr[i]==v)
      {
          j=i;
          break;
      }
    }
    while(j<n)
    {
        arr[j]=arr[j+1];
        j++;
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
