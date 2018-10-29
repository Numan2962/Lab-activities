#include<bits/stdc++.h>
using namespace std;
typedef struct list{
    int info;
    struct list *next;
}List;
List *createList()
{
    int x;
    List *a,*b,*c;
    a=new List;
    cin>>x;
    a->info=x;
    cin>>x;
    b=a;
    while(x!=0)
    {
        c=new List;
        c->info=x;
        b->next=c;
        b=b->next;
        cin>>x;
    }
    b->next=NULL;
    return a;
}
void display(List *head)
{
    List *a;
    a=head;
    while(a)
    {
        cout<<a->info<<" ";
        a=a->next;
    }
    cout<<endl;
}
List *insertvalue(List *head,int x)
{
    List *a,*b,*c;
    a=head;
    c=new List;
    c->info=x;
    if(x<=a->info)
    {
        c->next=a;
        return c;
    }
    while(x>=a->info&&a->next)
    {
        b=a;
        a=a->next;
    }
    if(x<=a->info)
    {
        b->next=c;
        c->next=a;
    }
    else
    {
        a->next=c;
        c->next=NULL;
    }
    return head;
}
int main()
{
    int x=0;
    List *head,*h1,*h2;
    cout<<"Create list: ";
    head=createList();
    display(head);
    while(x!=-1)
    {
        cout<<"value (Insert -1 to stop): ";
        cin>>x;
        head=insertvalue(head,x);
        display(head);
    }

    return 0;
}
