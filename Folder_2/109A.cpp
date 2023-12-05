#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i,k=0;
    cin>>n;
    if(n%7==0)
    {
        for(i=1;i<=n/7;i++)
            cout<<"7";
    }
    else
    {
        while(n%7!=0)
        {
            s = s + '4';
            n = n - 4;
            if(n<0)
            {
                k++;
                break;
            }
        }
        if(k!=0)
            cout<<"-1\n";
        else
        {
            for(i=1;i<=n/7;i++)
                s = s + '7';
            cout<<s;
        }
    }
    cout<<"\n";
    return 0;
}
