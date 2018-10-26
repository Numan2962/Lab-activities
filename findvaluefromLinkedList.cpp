#include<bits/stdc++.h>
#define pf printf
#define sf scanf
using namespace std;
typedef struct list{
    int info;
    struct list *next;
}List;
List *createlist()
{
   int x;
   List *head,*b,*c;
   head=new List;
   cin>>x;
   head->info=x;
   cin>>x;
   c=head;
   while(x!=0)
   {
       b=new List;
       b->info=x;
       c->next=b;
       c=c->next;
       cin>>x;
   }
   c->next=NULL;

   return head;
}
int main()
{
    int v;
    List *p,*head;
    head=createlist();
    p=head;
    cout<<"Value: ";
    cin>>v;
    while(p)
    {
        if(p->info==v)
        {
            cout<<"found"<<endl;
            break;
        }
        p=p->next;
    }
    if(p==NULL)
        cout<<"Not found"<<endl;
    return 0;
}
