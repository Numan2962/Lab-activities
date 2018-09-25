#include<stdio.h>
void THanoi(int n,char s,char t,char d)
{
    if(n==1)
        printf("%c->%c(%d)\n",s,d,n);
    else{
        THanoi(n-1,s,d,t);
        printf("%c->%c(%d)\n",s,d,n);
        THanoi(n-1,t,s,d);
        }
}
int main()
{
    int n;
    scanf("%d",&n);
    THanoi(n,'s','t','d');
    return 0;
}
