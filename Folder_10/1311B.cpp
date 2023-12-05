#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> position;
    int t,n,m,i,j,k,f=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1],b[n+1],p[m];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b+1,b+n+1);
        for(i=0;i<=m-1;i++)
        {
            cin>>p[i];
            position[p[i]]++;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[j]==-1)
                    continue;
                if(b[i]==a[j])
                {
                    k = j;
                    if(k>i)
                    {
                        while(k!=i)
                        {
                            if(position[k-1]!=0)
                            {
                                swap(a[k-1],a[k]);
                                k--;
                            }
                            else
                                break;
                        }
                    }
                    else if(k<i)
                    {
                        while(k!=i)
                        {
                            if(position[k]!=0)
                            {
                                swap(a[k],a[k+1]);
                                k++;
                            }
                            else
                                break;
                        }
                    }
                    if(k==i)
                    {
                        a[k] = -1;
                        f++;
                    }
                    break;
                }
            }
        }
        if(f==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        position.clear();
        f = 0;
    }
    return 0;
}
