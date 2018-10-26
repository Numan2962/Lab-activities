#include<bits/stdc++.h>
using namespace std;
typedef struct list{
    int info;
    struct list *next;
}List;
int main()
{
    List *a, *b, *t;
    int x;
    a=new List;
    cin>>x;
    a->info=x;
    cin>>x;
    b=a;
    while(x!=0)
    {
        t=new List;
        t->info=x;
        b->next=t;
        b=b->next;
        cin>>x;
    }
    b->next=NULL;
    b=a;
    while(b)
    {
        cout<<b->info<<" ";
        b=b->next;
    }

    return 0;
}
