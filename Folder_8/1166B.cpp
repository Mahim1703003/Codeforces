#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char vowel[5] = {'a','e','i','o','u'};
    int k,n,m,i,j,l=0;
    cin>>k;
    for(i=1;i<=sqrt(k);i++)
    {
        if(k%i==0)
        {
            if(i>=5 && k/i>=5)
            {
                l++;
                n = i;
                m = k/i;
                break;
            }
        }
    }
    if(l==0)
        cout<<"-1\n";
    else
    {
        char a[n][m];
        int in;
        for(j=0;j<=m-1;j++)
        {
            in = j % 5;
            for(i=0;i<=n-1;i++)
            {
                a[i][j] = vowel[in];
                in = (in+1) % 5;
            }
        }
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
                cout<<a[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
