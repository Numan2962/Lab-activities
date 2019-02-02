#include<bits/stdc++.h>
using namespace std;
vector<int>adj[15];
int main()
{
    int a,b,n,e,i,j;
    cin>>n>>e;
    for(i=0;i<e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        //adj[b].push_back(a);
    }
    for(i=1;i<=n;i++)
    {
        cout<<"adjacency list of "<<i<<": ";
        for(j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j];
            if(j==adj[i].size()-1)
                cout<<endl;
            else
                cout<<" --> ";
        }
    }
    return 0;
}
