#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int r1,c1,r2,c2,i,j,ct=0,sum;
    cin>>r1>>c1>>r2>>c2;
    if(r1==r2&&c1==c2)
        cout<<"0 0 0\n";
    else
    {
        if(r1==r2||c1==c2)
            cout<<"1 ";
        else
            cout<<"2 ";
        if ((r1 + c1) % 2 != (r2 + c2) % 2) cout << 0; else {
        if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2) cout << 1; else cout << 2;
    }
    cout << " ";
        cout<<max(abs(r1-r2),abs(c1-c2))<<"\n";
    }
    return 0;
}
