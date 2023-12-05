#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int,int> m;
    int n,i,x,y1,y2,y3;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        m[x]++;
    }

    x = (m[1]<m[2])?m[1]:m[2];
    y1 = (x<m[4])?x:m[4];
    m[1] = m[1]- y1;
    m[2] = m[2]- y1;
    m[4] = m[4]- y1;

    x = (m[1]<m[2])?m[1]:m[2];
    y2 = (x<m[6])?x:m[6];
    m[1] = m[1]- y2;
    m[2] = m[2]- y2;
    m[6] = m[6]- y2;

    x = (m[1]<m[3])?m[1]:m[3];
    y3 = (x<m[6])?x:m[6];
    m[1] = m[1]- y3;
    m[3] = m[3]- y3;
    m[6] = m[6]- y3;

    if(y1!=0||y2!=0||y3!=0)
    {
        if(y1+y2+y3==n/3)
        {
            for(i=1;i<=y1;i++)
                cout<<"1 2 4\n";
            for(i=1;i<=y2;i++)
                cout<<"1 2 6\n";
            for(i=1;i<=y3;i++)
                cout<<"1 3 6\n";
        }
        else
            cout<<"-1\n";
    }
    else
        cout<<"-1\n";

    return 0;
}
