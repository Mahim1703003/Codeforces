#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,x,ct=0,p=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        for(i=0;i<=n-1;i++)
        {
            if(a[i]==1)
            {
                ct++;
                if(ct==1)
                    p = p;
                else
                {
                    if(p==1)
                        p = 2;
                    else
                        p = 1;
                }
            }
            else
            {
                if(ct!=0)
                {
                    if(p==1)
                        p = 2;
                    else
                        p = 1;
                    ct = 0;
                    if(i==n-1)
                        break;
                }
                if(i==n-1)
                    break;
                if(a[i]!=1&&a[i+1]!=1)
                {
                    p = p;
                    if(i==n-2)
                        break;
                }
                else if(a[i]!=1&&a[i+1]==1)
                {
                    if(i==n-2)
                    {
                        p = p;
                        break;
                    }
                    else
                    {
                        if(p==1)
                            p = 2;
                        else
                            p = 1;
                    }
                }
            }
        }
        if(p==1)
            cout<<"First\n";
        else
            cout<<"Second\n";
        ct = 0;
        p = 1;
    }
    return 0;
}
