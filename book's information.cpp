#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
struct book{
   string book_name,author_name,ISBN,published;
   float price;

}b[50];
int main()
{
    int n,i;
    pf("Number of books: ");
    sf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        pf("Take information for Book_%d\n",i+1);
        pf("Book_name: ");
        getline(cin,(b[i].book_name));
        pf("Author_name: ");
        getline(cin,(b[i].author_name));
        pf("ISBN No: ");
        getline(cin,(b[i].ISBN));
        pf("Published: ");
        getline(cin,(b[i].published));
        pf("Price: ");
        sf("%f",&b[i].price);
        getchar();
    }
    pf("\t\t\tBook List:\n");
    for(i=0;i<n;i++)
    {
        pf("%d.\n",i+1);
        cout<<"Book name: "<<(b[i].book_name)<<endl<<"Author name: "<<(b[i].author_name)<<endl;
        cout<<"ISBN No: "<<(b[i].ISBN)<<endl<<"Published: "<<(b[i].published)<<endl;
        pf("Price: %.3f\n\n",b[i].price);
    }

    return 0;
}
