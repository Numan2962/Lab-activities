#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[],int low,int high)
{
    int pivot,i,j,t;
    pivot=arr[high];
    for(i=low-1,j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            t=arr[j];
            arr[j]=arr[i];
            arr[i]=t;
        }
    }
    t=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=t;

    return i+1;
}
void quicksort(int arr[],int low,int high)
{
    if(low>=high)
        return;
    int p=Partition(arr,low,high);
    quicksort(arr,low,p-1);
    quicksort(arr,p+1,high);
}
int main()
{
    int arr[50],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
