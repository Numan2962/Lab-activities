#include<stdio.h>
int arr[50],x;
int binary_search(int low,int high)
{
    if(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==x)
            return mid;
        else if(x<arr[mid])
            return binary_search(low,mid-1);
        else if(x>arr[mid])
            return binary_search(mid+1,high);
    }
    return -1;
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    j=binary_search(0,n);
    if(j==-1)
        printf("Not found\n");
    else
        printf("%d is in index %d\n",x,j);
    return 0;
}
