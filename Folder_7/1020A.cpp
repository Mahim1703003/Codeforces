#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,h,a,b,k,ta,fa,tb,fb,minutues;
    cin>>n>>h>>a>>b>>k;
    while(k--)
    {
        cin>>ta>>fa>>tb>>fb;
        if(ta==tb)
            minutues = abs(fa-fb);
        else
        {
            if(fa>=a&&fa<=b)
                minutues = abs(ta-tb) + abs(fa-fb);
            else
            {
                if(fa<a)
                    minutues = (a-fa) + abs(ta-tb) + abs(a-fb);
                else
                    minutues = (fa-b) + abs(ta-tb) + abs(b-fb);
            }
        }
        cout<<minutues<<"\n";
    }
    return 0;
}
