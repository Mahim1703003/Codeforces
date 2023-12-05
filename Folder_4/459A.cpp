#include<iostream>
#include<utility>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x1,y1,x2,y2,x3,y3,x4,y4,diff;
    cin>>x1>>y1>>x2>>y2;
    if(y1==y2)
    {
        diff = abs(x1-x2);
        x3 = x1;
        x4 = x2;
        if(y1+diff<=1000)
        {
            y3 = y1 + diff;
            y4 = y2 + diff;
        }
        else
        {
            y3 = y1 - diff;
            y4 = y2 - diff;
        }
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
    }
    else if(x1==x2)
    {
        diff = abs(y1-y2);
        y3 = y1;
        y4 = y2;
        if(x1+diff<=1000)
        {
            x3 = x1 + diff;
            x4 = x2 + diff;
        }
        else
        {
            x3 = x1 - diff;
            x4 = x2 - diff;
        }
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
    }
    else
    {
        pair <int,int> p1,p2,p3,p4;
        p1 = make_pair(min(x1,x2),min(y1,y2));
        p2 = make_pair(max(x1,x2),min(y1,y2));
        p3 = make_pair(min(x1,x2),max(y1,y2));
        p4 = make_pair(max(x1,x2),max(y1,y2));
        if(abs(p2.first-p1.first)==abs(p4.second-p2.second))
        {
            if((p1.first==x1&&p1.second==y1)||(p1.first==x2&&p1.second==y2)){

            }
            else
                cout<<p1.first<<" "<<p1.second<<" ";
            if((p2.first==x1&&p2.second==y1)||(p2.first==x2&&p2.second==y2)){

            }
            else
                cout<<p2.first<<" "<<p2.second<<" ";
            if((p3.first==x1&&p3.second==y1)||(p3.first==x2&&p3.second==y2)){

            }
            else
                cout<<p3.first<<" "<<p3.second<<" ";
            if((p4.first==x1&&p4.second==y1)||(p4.first==x2&&p4.second==y2)){

            }
            else
                cout<<p4.first<<" "<<p4.second<<" ";
        }
        else
            cout<<"-1\n";
    }
    return 0;
}
