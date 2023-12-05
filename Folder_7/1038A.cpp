#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,k=1,l=0,p=0;
    cin>>n>>m;
    char a[n+1];
    cin>>a;
    sort(a,a+n);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==a[i+1])
            k++;
        else
        {
            p++;
            if(p==1)
                l=k;
            else
            {
                if(k<l)
                    l=k;
            }
            k=1;
        }
    }
    if(p==m)
        cout<<m*l<<endl;
    else
        cout<<"0\n";
    return 0;
}
