#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q,n,k,i,ct=0,odd=0;
    cin>>q;
    while(q--)
    {
        cin>>n>>k;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
                odd++;
        }
        if(odd<k)
            cout<<"NO\n";
        else
        {
            if(k%2==odd%2)
            {
                cout<<"YES\n";
                for(i=1;i<=n;i++)
                {
                    if(a[i]%2==1)
                    {
                        ct++;
                        if(ct==k)
                        {
                            cout<<n<<"\n";
                            break;
                        }
                        else
                            cout<<i<<" ";
                    }
                }
            }
            else
                cout<<"NO\n";
        }
        ct = 0;
        odd = 0;
    }
    return 0;
}
