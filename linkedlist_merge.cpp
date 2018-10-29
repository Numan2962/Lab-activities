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
List *mergelist(List *h1, List *h2)
{
    List *a;
    a=h1;
    while(a->next)
    {
        a=a->next;
    }
    a->next=h2;

    return h1;
}
int main()
{
    List *head,*h1,*h2;
    cout<<"Create first list: ";
    h1=createList();
    cout<<"Create second list: ";
    h2=createList();
    head=mergelist(h1,h2);
    display(head);
    return 0;
}
