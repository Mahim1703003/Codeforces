#include<iostream>
#include<algorithm>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map <int,int> m;
    map <int,int>::iterator it;

    int n,q,i,left,right,mid,k=0,sum=0;

    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    sort(a,a+n);

    cin>>q;
    int b[q];
    for(i=0;i<=q-1;i++)
        cin>>b[i];

    for(i=0;i<=q-1;i++)
    {
        left = 0;
        right = n-1;
        while(left<=right)
        {
            mid = (left + right) / 2;
            if(b[i]<a[mid])
                right = mid - 1;
            else if(b[i]>a[mid])
                left = mid + 1;
            else
            {
                k++;
                if(m[a[mid]]==1)
                    cout<<++mid<<endl;
                else
                {
                    it = m.begin();
                    while(it->first!=a[mid])
                    {
                        sum = sum + it->second;
                        it++;
                    }
                    sum = sum + it->second;
                    cout<<sum<<endl;
                    sum = 0;
                }
                break;
            }
        }
        if(k==0)
        {
            if(b[i]<a[mid])
                cout<<mid<<endl;
            else
                cout<<++mid<<endl;
        }
        k=0;
    }

    return 0;

}
