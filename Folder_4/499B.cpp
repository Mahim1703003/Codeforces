#include<iostream>
#include<cstring>
using namespace std;

class word
{
public:
    char a[15];
};

class word1
{
public:
    char a[15];
};

class word2
{
public:
    char a[15];
};

int main()
{
    int n,m,i,j,n1,n2;
    cin>>n>>m;
    word obj[n];
    word1 obj1[m];
    word2 obj2[m];
    for(i=0;i<=m-1;i++)
        cin>>obj1[i].a>>obj2[i].a;
    for(i=0;i<=n-1;i++)
        cin>>obj[i].a;
    for(j=0;j<=n-1;j++)
    {
        for(i=0;i<=m-1;i++)
        {
            if(strcmp(obj[j].a,obj1[i].a)==0)
            {
                n1 = strlen(obj1[i].a);
                n2 = strlen(obj2[i].a);
                if(n1<n2)
                    cout<<obj1[i].a<<" ";
                else if(n2<n1)
                    cout<<obj2[i].a<<" ";
                else
                    cout<<obj1[i].a<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}
