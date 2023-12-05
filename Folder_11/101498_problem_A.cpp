#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,j,l,k=0,m=0,p=0;
    char name[55];
    cin>>t;
    int a[t];
    for(i=0;i<=t-1;i++)
    {
        cin>>n;
        int b[n];
        for(j=0;j<=n-1;j++)
        {
            cin>>name;
            cin>>b[j];
        }
        for(j=0;j<=n-1;j++)
        {
            for(l=j+1;l<=n-1;l++)
            {
                if(b[j]==b[l])
                    k++;
            }
            if(k>m)
            {
                p++;
                m=k;
                a[i]=b[j];
            }
            k=0;
            m=0;
        }
        if(p==0){
            sort(b,b+n);
            a[i]=b[0];
        }
        else
            p=0;
    }
    for(i=0;i<=t-1;i++)
        cout<<a[i]<<endl;
    return 0;
}
