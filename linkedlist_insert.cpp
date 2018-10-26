#include<bits/stdc++.h>
using namespace std;
typedef struct list{
    int info;
    struct list *next;
}List;
List *createlist()
{
   int x;
   List *a,*b,*c;
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
List *insertvalue(List *head,int x,int y,int v)
{
    bool k=false;
    List *a, *b ,*c,*d;
    c=head;
    while(c)
    {
    if(c->info==x&& c->next->info==y)
    {
        a=c;
        b=c->next;
        k=true;
        break;
    }
    c=c->next;
    }
    if(!k)
    {
        cout<<"Position unknown"<<endl<<"Can't insert"<<endl;
        return head;
    }
    d=new List;
    d->info=v;
    d->next=b;
    a->next=d;
    return head;
}
List *insertfirst(List *head,int v)
{
    List *i;
    i=new List;
    i->info=v;
    i->next=head;
    return i;
}
List *insertlast(List *head,int v)
{
    List *i,*j=head;
    i=new List;
    i->info=v;
    i->next=NULL;
    while(j->next)
    {
        j=j->next;
    }
    j->next=i;

    return head;
}
int main()
{
    int p,q,v,t=1;
    List *head;
    cout<<"Create list: ";
    head=createlist();
    displaylist(head);
    while(t==1||t==2||t==3)
    {
        cout<<"Enter 1 to insert at first position,2 for last position"<<endl;
        cout<<"3 for other position,other digit to stop"<<endl;
        cin>>t;
        if(t==1||t==2||t==3)
        {
            cout<<"value: ";
            cin>>v;
        }
        if(t==1)
        {
            head=insertfirst(head,v);
            displaylist(head);
        }else if(t==2)
        {
            head=insertlast(head,v);
            displaylist(head);
        }else if(t==3)
        {
            cout<<"Previous value of "<<v<<" : ";
            cin>>p;
            cout<<"Next value of "<<v<<" : ";
            cin>>q;
            head=insertvalue(head,p,q,v);
            displaylist(head);
        }
    }
    return 0;
}
