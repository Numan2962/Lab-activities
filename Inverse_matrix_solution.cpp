#include<bits/stdc++.h>
using namespace std;
#define N 3
float a[N][N],inverse[N][N],c[N];
void show(float a[N][N])
{
    int i,j;
    cout<<endl;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
float det(float a[N][N])
{
    float d=0;
    int i;
    for(i=0;i<N;i++)
    {
        d+=a[0][i]*(a[1][(i+1)%N]*a[2][(i+2)%N]-a[1][(i+2)%N]*a[2][(i+1)%N]);
    }
    return d;
}
void inversematrix(float a[N][N])
{
    int i,j;
    float d=det(a);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            float p=(a[(j+1)%N][(i+1)%N]*a[(j+2)%N][(i+2)%N]-a[(j+1)%N][(i+2)%N]*a[(j+2)%N][(i+1)%N])/d;
            inverse[i][j]=p;
        }
    }
    show(inverse);
}
int main()
{
    int i,j;
    float x=0;
    cout<<"Enter "<<N<<"x"<<N<<" matrix:"<<endl;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            cin>>a[i][j];
    cout<<"Enter value of C:"<<endl;
    for(i=0;i<N;i++)cin>>c[i];
    show(a);
    cout<<"Determinate: "<<det(a)<<endl<<endl;
    cout<<"Inverse_matrix: ";
    inversematrix(a);
    cout<<"value of X:"<<endl;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            x+=inverse[i][j]*c[j];
        }
        cout<<x<<endl;
        x=0;
    }


    return 0;
}
