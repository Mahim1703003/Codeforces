#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,stren,intellg,exp,d;
    cin>>t;
    while(t--)
    {
        cin>>stren>>intellg>>exp;
        stren = stren + exp;
        if(stren>intellg)
        {
            if(exp==0)
                cout<<"1\n";
            else if(exp==1)
            {
                if(stren-1>intellg+1)
                    cout<<"2\n";
                else
                    cout<<"1\n";
            }
            else
            {
                d = (stren+intellg) / 2;
                cout<<stren-d<<"\n";
            }
        }
        else
            cout<<"0\n";
    }
    return 0;
}
