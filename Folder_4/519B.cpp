#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int,int> m1;
    map <int,int> m2;
    map <int,int> m3;

    int n,i;
    cin>>n;
    int a[n],b[n-1],c[n-2];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        m1[a[i]]++;
    }
    for(i=0;i<=n-2;i++)
    {
        cin>>b[i];
        m2[b[i]]++;
    }
    for(i=0;i<=n-3;i++)
    {
        cin>>c[i];
        m3[c[i]]++;
    }
    for(i=0;i<=n-1;i++)
    {
        if(m1[a[i]]!=m2[a[i]])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
    for(i=0;i<=n-2;i++)
    {
        if(m2[b[i]]!=m3[b[i]])
        {
            cout<<b[i]<<endl;
            break;
        }
    }
    return 0;
}

