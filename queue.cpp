#include<bits/stdc++.h>
using namespace std;
#define Max 100
typedef struct{
    int head,tail;
    int data[Max];
}Queue;
int s;
bool k=true;
void push(Queue *q,int value)
{
    q->data[q->tail]=value;
    q->tail+=1;
}
int pop(Queue *q)
{
    int value;
    if(q->tail==q->head)
    {
       printf("Underflow\n");
       return -1;
    }
    else
    {
        value=q->data[q->head];
        q->head+=1;
    }
    return value;
}
int main()
{
    int value,x=0;
    Queue q1;
    q1.head=0;
    q1.tail=0;
    printf("Size: ");
    scanf("%d",&s);
    while(x==0||x==1)
    {
        printf("Enter 0 to push, 1 to pop,other number to stop\n");
        scanf("%d",&x);
        if(x==0)
        {
            if(q1.tail==s)
                printf("Overflow\n");
            else
            {
                printf("value: ");
                scanf("%d",&value);
                push(&q1,value);
            }
        }else if(x==1)
        {
            value=pop(&q1);
            if(value!=-1)
            printf("%d\n",value);
        }
    }

    return 0;
}
