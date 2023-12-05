#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct channel
{
    char name[55];
    int fq;
};

int main()
{
    int t,n,i,j,l,k=0,m=0,p=0;
    cin>>t;
    int a[t];
    for(i=0;i<=t-1;i++)
    {
        cin>>n;
        struct channel c[n],temp;
        for(j=0;j<=n-1;j++)
        {
            cin>>c[j].name;
            cin>>c[j].fq;
        }
        for(j=0;j<=n-1;j++)
        {
            for(l=j+1;l<=n-1;l++)
            {
                if((c[j].fq==c[l].fq))
                    k++;
            }
            if(k>=m)
            {
                p++;
                if(k>m){
                m=k;
                a[i]=c[j].fq;
                }
                else if(k==m)
                {
                    if(p==1)
                       a[i]=c[j].fq;
                    else{
                    if(c[j].fq<a[i])
                        a[i]=c[j].fq;
                    }
                }
            }
            k=0;
        }
        p=0;
        m=0;
        k=0;
    }
    for(i=0;i<=t-1;i++)
        cout<<a[i]<<endl;
    return 0;
}


