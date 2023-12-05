#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,k,i,j,div,rem,ct=0;
    cin>>n>>k;
    int a[n],miarray[k+1],maarray[k+1];
    for(j=0;j<=n-1;j++)
    {
        cin>>a[j];
        div = a[j] / k;
        rem = a[j] % k;
        for(i=1;i<=k;i++)
            m[i] = div;
        for(i=1;i<=rem;i++)
            m[i]++;
        if(j==0)
        {
            for(i=1;i<=k;i++)
            {
                miarray[i] = m[i];
                maarray[i] = m[i];
            }
        }
        else
        {
            for(i=1;i<=k;i++)
            {
                miarray[i] = min(miarray[i],m[i]);
                maarray[i] = max(maarray[i],m[i]);
            }
        }
        m.clear();
    }
    for(i=1;i<=k;i++)
    {
        if(maarray[i]-miarray[i]>1)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    for(i=0;i<=n-1;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            ct++;
            rem = ct % k;
            if(rem!=0)
                cout<<rem<<" ";
            else
                cout<<k<<" ";
        }
        cout<<"\n";
        ct = 0;
    }
    return 0;
}
