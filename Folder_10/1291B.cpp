#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,j,ct=0;
    bool result = true;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
            cin>>a[i];
        if(n==2)
        {
            if(a[1]==0&&a[2]==0)
                cout<<"No\n";
            else
                cout<<"Yes\n";
            continue;
        }
        i = 2;
        j = n-1;
        while(i<=j)
        {
            if(a[i]>ct&&a[j]>ct)
            {
                if(j-i==1)
                {
                    if(a[i]==ct+1&&a[j]==ct+1)
                        result = false;
                }
                i++;
                j--;
                ct++;
            }
            else
            {
                result = false;
                break;
            }
        }
        if(result)
            cout<<"Yes\n";
        else
            cout<<"No\n";
        result = true;
        ct = 0;
    }
    return 0;
}
