#include<bits/stdc++.h>
using namespace std;
typedef struct list{
    int info;
    struct list *next;
}List;
List *createList()
{
    List *head,*a,*b;
    int x;
    head=new List;
    cin>>x;
    head->info=x;
    a=head;
    cin>>x;
    while(x!=0)
    {
        b=new List;
        b->info=x;
        a->next=b;
        a=b;
        cin>>x;
    }
    a->next=NULL;

    return head;
}
List *deletenode(List *head,int v)
{
    bool k=false;
    List *a,*b,*c;
    a=head;
    if(a->info==v)
    {
        return head->next;
    }
    while(a)
    {
        if(a->next->info==v)
        {
            b=a;
            c=a->next;
            k=true;
            break;
        }
        a=a->next;
    }
    if(k)
        b->next=c->next;

        return head;
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
int main()
{
    int v;
    List *head;
    head=createList();
    display(head);
    cout<<"delete(Enter -1 to stop): ";
    while(cin>>v&&v!=-1)
    {
       head=deletenode(head,v);
       if(head==NULL)
           break;
       display(head);
       cout<<"delete(Enter -1 to stop): ";
    }
    return 0;
}
