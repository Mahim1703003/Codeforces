#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,i,j,k=0;
    cin>>a>>b>>c;
    for(i=0;i<=5000;i++)
    {
        for(j=0;j<=5000;j++)
        {
            if(a*i+b*j==c)
            {
                k++;
                break;
            }
        }
    }
    if(k!=0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
