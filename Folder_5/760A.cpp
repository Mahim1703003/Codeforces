#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,d,day,column;
    cin>>m>>d;
    if(m==2)
        day = 28;
    else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        day = 31;
    else
        day = 30;
    day = day - (7-d+1);
    column = ceil((day*1.0)/(7*1.0));
    cout<<column+1<<endl;
    return 0;
}
