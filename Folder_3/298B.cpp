#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t,i,sx,sy,ex,ey,f=0,dx,dy,x=0,y=0;
    string s;
    char ch1='a',ch2='b';
    cin>>t>>sx>>sy>>ex>>ey;
    cin>>s;
    dx = abs(sx-ex);
    dy = abs(sy-ey);
    if(sx>ex)
        ch1 = 'W';
    else if(sx<ex)
        ch1 = 'E';
    if(sy>ey)
        ch2 = 'S';
    else if(sy<ey)
        ch2 = 'N';
    for(i=0;i<=s.size()-1;i++)
    {
        if(s[i]==ch1)
            x++;
        if(s[i]==ch2)
            y++;
        if(x>=dx && y>=dy)
        {
            f++;
            break;
        }
    }
    if(f!=0)
    {
        if(dx==0 && dy==0)
            cout<<"0\n";
        else
            cout<<i+1<<endl;
    }
    else
        cout<<"-1\n";

    return 0;
}
