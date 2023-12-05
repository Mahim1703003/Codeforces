#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,hh,mm,k=0;
    cin>>x>>hh>>mm;
    while(1)
    {
        if(hh/10==7||hh%10==7||mm/10==7||mm%10==7)
            break;
        mm = mm - x;
        if(mm<0)
        {
            mm = 60 + mm;
            hh--;
            if(hh<0)
                hh = 24 + hh;
        }
        k++;
    }
    cout<<k<<"\n";
    return 0;
}
