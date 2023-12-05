#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int n,i,d,sum=0;
    double db;
    cin>>n;
    int b[n+1],a[5];
    memset(a,0,sizeof(a));
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
        a[b[i]]++;
    }

    sum = sum + a[4];

    d = a[2]/2;
    sum = sum + d;
    a[2] = a[2] - 2*d;

    if(a[3]>=a[1])
    {
        sum = sum + a[1];
        a[3] = a[3] - a[1];
        sum = sum + a[3] + a[2];
    }
    else
    {
        sum = sum + a[3];
        a[1] = a[1] - a[3];
        if(a[2]!=0)
        {
            if(a[1]<=2)
                sum++;
            else
            {
                a[1] = a[1] - 2;
                sum++;
                db = a[1]/4.0;
                sum = sum + ceil(db);
            }
        }
        else
        {
            db = a[1]/4.0;
            sum = sum + ceil(db);
        }
    }

    cout<<sum<<endl;

    return 0;
}
