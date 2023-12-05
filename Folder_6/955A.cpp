#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int hh,mm,hour=0,minute,total_minute,H,D,C,N,no_of_pun,total_hunger;
    double cost1,cost2,discount,ans;
    cin>>hh>>mm;
    cin>>H>>D>>C>>N;
    if(hh<20)
    {
        no_of_pun = ceil((H*1.0)/(N*1.0));
        cost1 = no_of_pun * C * 1.0;
        minute = (60-mm) % 60;
        if(minute!=0)
            hh = (hh+1) % 24;
        while(hh!=20)
        {
            hh = (hh+1) % 24;
            hour++;
        }
        total_minute = minute + (hour * 60);
        total_hunger = H + (total_minute*D);
        discount = (C*1.0) - (0.2*C*1.0);
        no_of_pun = ceil((total_hunger*1.0)/(N*1.0));
        cost2 = no_of_pun * discount * 1.0;
        ans = min(cost1,cost2);
        cout<<fixed;
        cout<<setprecision(4)<<ans<<"\n";
    }
    else
    {
        discount = (C*1.0) - (0.2*C*1.0);
        no_of_pun = ceil((H*1.0)/(N*1.0));
        ans = no_of_pun * discount * 1.0;
        cout<<fixed;
        cout<<setprecision(4)<<ans<<"\n";
    }
    return 0;
}
