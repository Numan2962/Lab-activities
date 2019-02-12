#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x[]={0,1,2};
    float y[]={0,1,20};
    float X=0,Y=19;
    int i,j;
    for(i=0;i<3;i++)
    {
        float p=1;
        for(j=0;j<3;j++)
        {
            if(i!=j)
            {
                p*=((Y-y[j])/(y[i]-y[j]));
            }
        }
        X+=(p*x[i]);
    }
    cout<<X<<endl;
    return 0;
}
