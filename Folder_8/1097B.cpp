#include<iostream>
#include<list>
#include<iterator>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    list <int> l;
    list <int>::iterator it;
    int n,sum=0,i,j,len,number,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    len = pow(2.0,n*1.0);
    for(i=0;i<=len-1;i++)
    {
        number = i;
        while(number)
        {
            l.push_front(number%2);
            number = number / 2;
        }
        while(l.size()!=n)
            l.push_front(0);
        for(it=l.begin(),j=0;it!=l.end();it++,j++)
        {
            if(*it==0)
            {
                sum = sum - a[j];
                if(sum<0)
                    sum = sum + 360;
            }
            else
            {
                sum = sum + a[j];
                sum = sum % 360;
            }
        }
        if(sum==0)
            k++;
        l.clear();
        sum = 0;
    }
    if(k!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
