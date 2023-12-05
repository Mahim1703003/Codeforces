#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int t,n,max_number,in=-1,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
            if(i==1)
                max_number = a[i];
            else if(a[i]>max_number)
                max_number = a[i];
        }
        if(m.size()==1)
            cout<<"-1\n";
        else
        {
            for(i=1;i<=n;i++)
            {
                if(i==1)
                {
                    if(a[i]==max_number&&a[i+1]!=max_number)
                    {
                        in = i;
                        break;
                    }
                }
                else if(i==n)
                {
                    if(a[i]==max_number&&a[i-1]!=max_number)
                    {
                        in = i;
                        break;
                    }
                }
                else
                {
                    if(a[i]==max_number)
                    {
                        if(a[i+1]!=max_number||a[i-1]!=max_number)
                        {
                            in = i;
                            break;
                        }
                    }
                }
            }
            cout<<in<<"\n";
        }
        m.clear();
    }
    return 0;
}
