#include<iostream>
using namespace std;
int main()
{
    int n,l,i,k,p=0;
    cin>>n>>l;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(l%a[i]==0)
        {
            p++;
            if(p==1)
                k=l/a[i];
            else
            {
                if((l/a[i])<k)
                    k=l/a[i];
            }
        }
    }
    cout<<k<<endl;
    return 0;
}
