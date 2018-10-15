#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
struct student
{
    string name;
    int id;
    float mid,final_exam,quiz[20],average,total;

}s[50];
int main()
{
    int n,q,Id;
    float h;
    string student_name;
    pf("Number of student & number of quiz: ");
    sf("%d%d",&n,&q);
    for(int i=0;i<n;i++)
    {
        float ave,sum=0,t;
        getchar();
        pf("Take information for student_%d:\n",i+1);
        pf("Name: ");
        getline(cin,(s[i].name));
        pf("Id: ");
        sf("%d",&s[i].id);
        pf("Midterm's mark: ");
        sf("%f",&s[i].mid);
        if((s[i].mid)>40)
        {
            while((s[i].mid)>40)
            {
                pf("Invalid!! Take valid marks\nMidterm's mark: ");
                sf("%f",&s[i].mid);
            }
        }
        pf("Final_exam's mark: ");
        sf("%f",&s[i].final_exam);
        if((s[i].final_exam)>50)
        {
            while((s[i].final_exam)>50)
            {
                pf("Invalid!!\n Take valid marks\nFinal exam's mark: ");
                sf("%f",&s[i].final_exam);
            }
        }
        for(int j=0;j<q;j++)
        {
            pf("Quiz_%d: ",j+1);
            sf("%f",&s[i].quiz[j]);
            if(s[i].quiz[j]>10)
            {
                while(s[i].quiz[j]>10)
                {
                    pf("Invalid!!\nTake valid quiz mark:-\nQuiz_%d: ",j+1);
                    sf("%f",&s[i].quiz[j]);
                }
            }
            sum+=s[i].quiz[j];
        }
        ave=sum/q;
        s[i].average=ave;
        t=(s[i].mid)+(s[i].final_exam)+(s[i].average);
        s[i].total=t;
    }

    h=(s[0].total);
    student_name=(s[0].name);
    Id=s[0].id;
    for(int i=1;i<n;i++)
    {
        if(h<(s[i].total))
        {
            h=(s[i].total);
            student_name=(s[i].name);
            Id=s[i].id;
        }
    }
    cout<<student_name;
    pf(" has achieved highest mark (%.3f) whose id no %d\n",h,Id);
    return 0;
}
