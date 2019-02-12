#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x0=0,y0=0,z0=0,Exs=5,Eys=2,Exa,Eya,x,y,z;
    Exa=INT_MAX;
    Eya=INT_MAX;
    while(Exa>Exs)
    {
        x=4-2*y0-3*z0;
        Exa=abs((x-x0)/x)*100;
        y=(24-2*x0-12*z0)/6;
        Eya=abs((y-y0)/y)*100;
        z=48-x0-y0;
        printf("x:%.5f y:%.5f z:%.5f\n",x,y,z);

        printf("Exa: %.5f\tEya: %.5f\n",Exa,Eya);
        x0=x;
        y0=y;
        z0=z;
    }
    return 0;
}
