#include<bits/stdc++.h>
using namespace std;
int fit[100000],p[100],b[100],bb[100];
int main()
{
    int i,j,bn,pn;
    cin>>bn;
    for(i=0;i<bn;i++)
    {
        cin>>b[i];
        bb[i]=b[i];
    }
    sort(b,b+i,greater<int>());
    cin>>pn;
    for(i=0;i<pn;i++)cin>>p[i];
    sort(p,p+i,greater<int>());
    for(i=0;i<bn;i++)
        fit[b[i]]=p[i];
    cout<<endl;
    for(i=0;i<bn;i++)
        cout<<fit[bb[i]]<<"  \t"<<bb[i]<<"  \t"<<endl;
    return 0;
}

