#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int t,n,i,k=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(i=0;i<=n-1;i++)
            cin>>b[i];
        if(a[0]!=b[0])
            cout<<"NO\n";
        else
        {
            for(i=n-1;i>=1;i--)
            {
                m[a[i]]--;
                if(a[i]>b[i])
                {
                    if(m[-1]==0)
                    {
                        k++;
                        break;
                    }
                 }
                else if(a[i]<b[i])
                {
                    if(m[1]==0)
                    {
                        k++;
                        break;
                    }
                }
                /*else
                {
                    if(m[0]==0)
                    {
                        k++;
                        break;
                    }
                }*/
            }
            if(k!=0)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        m.clear();
        k = 0;
    }
    return 0;
}
