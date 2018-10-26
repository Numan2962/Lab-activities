#include<bits/stdc++.h>
#define pf printf
#define sf scanf
using namespace std;
typedef struct list{
    int info;
    struct list *next;
}List;
List *a,*b,*c;
int x;
List *createlist()
{
   a=new List;
   cin>>x;
   a->info=x;
   cin>>x;
   c=a;
   while(x!=0)
   {
       b=new List;
       b->info=x;
       c->next=b;
       c=c->next;
       cin>>x;
   }
   c->next=NULL;
   return a;
}
void displaylist(List *d)
{
    while(d)
    {
        cout<<d->info<<" ";
        d=d->next;
    }
    cout<<endl;
}
void insertvalue(List *h,int x,int y,int v)
{
    bool k=false;
    List *A, *B ,*C,*D;
    C=h;
    while(C)
    {
    if(C->info==x&& C->next->info==y)
    {
        A=C;
        B=C->next;
        k=true;
    }
    C=C->next;
    }
    if(!k)
    {
        cout<<"Position unknown"<<endl<<"Can't insert"<<endl;
        return;
    }
    D=new List;
    D->info=v;
    D->next=B;
    A->next=D;
}
int main()
{
    int p,q,v;
    List *head;
    head=createlist();
    displaylist(head);
    cout<<"Take value for insert: ";
    cin>>v;
    cout<<"Previous value of "<<v<<" : ";
    cin>>p;
    cout<<"Next value of "<<v<<" : ";
    cin>>q;
    insertvalue(head,p,q,v);
    displaylist(head);
    return 0;
}
