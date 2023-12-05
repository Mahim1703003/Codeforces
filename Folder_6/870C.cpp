#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q,n,div;
    cin>>q;
    while(q--)
    {
        cin>>n;
        if(n%2==0)
        {
            if(n==2)
                cout<<"-1\n";
            else
            {
                div = n / 2;
                div = div / 2;
                cout<<div<<"\n";
            }
        }
        else
        {
            div = n / 2;
            if(div>=4)
            {
                if(n==11)
                    cout<<"-1\n";
                else
                {
                    div = div - 4;
                    div = div / 2;
                    cout<<1+div<<"\n";
                }
            }
            else
                cout<<"-1\n";
        }
    }
    return 0;
}
