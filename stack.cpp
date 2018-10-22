#include<bits/stdc++.h>
using namespace std;
#define S 100
typedef struct St{
    int data[S];
    int top;
}Stack;
int Size;
void push(Stack *s,int v)
{
        s->data[s->top]=v;
        s->top+=1;
}
int pop(Stack *s)
{
    int v;
    if(s->top==0)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    s->top-=1;
    v=s->data[s->top];
    return v;
}
int main()
{
    int x=0,v,k;
    Stack s;
    s.top=0;
    cout<<"Size: ";
    cin>>Size;
    while(x==1||x==0)
    {
        cout<<"Enter 1 to push 0 to pop,other digit to stop"<<endl;
        cin>>x;
        if(x==1)
        {
           if(s.top==Size)
            cout<<"Stack overflow"<<endl;
           else
           {
               cin>>v;
               push(&s,v);
           }
        }else if(x==0)
        {
            k=pop(&s);
            if(k!=-1)
                cout<<k<<endl;
        }
    }
    return 0;
}
