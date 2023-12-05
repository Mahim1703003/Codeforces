#include<iostream>
using namespace std;
int main()
{
    int n,q,i,j,p,b,s;
    cin>>q;
    while(q--)
    {
        cin>>n;
        s = n-1;
        int a[n+1];
        for(i=1;i<=n;i++)
            cin>>a[i];
        while(s){
        p = 0;
        b = 0;
        for(i=1;i<=n;i++)
        {
            if(a[i]!=i)
            {
                b = i;
                break;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]==b)
            {
                p = i;
                break;
            }
        }
        for(i=p;i>=b+1;i--)
            swap(a[i],a[i-1]);
        if(p==0&&b==0)
            break;
        s = s - (p-b);
        }
        for(i=1;i<=n;i++)
            cout<<a[i]<<" ";
        p = 0;
        b = 0;
        cout<<endl;
    }
}
