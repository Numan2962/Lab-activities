#include<bits/stdc++.h>
using namespace std;
int fit[100000];
int main()
{
    int i,j,p[100],b[100],bn,pn;
    cin>>bn;
    for(i=0;i<bn;i++)cin>>b[i];
    cin>>pn;
    for(i=0;i<pn;i++)cin>>p[i];
    for(i=0;i<pn;i++)
        for(j=0;j<bn;j++)
            if((p[i]<=b[j]))
                if(fit[b[j]]==0)
                {
                    fit[b[j]]=p[i];
                    break;
                }
    cout<<endl;
    for(i=0;i<bn;i++)
        cout<<fit[b[i]]<<" \t"<<b[i]<<endl;
    return 0;
}

