#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a1,a2,i;
    cin>>a1>>a2;
    for(i=1;i>=1;i++)
    {
        if(a1>=a2)
        {
            a1 = a1 - 2;
            a2++;
        }
        else
        {
            a2 = a2 - 2;
            a1++;
        }
        if(a1<=0 || a2<=0)
        {
            if(a1<0||a2<0)
                i--;
            break;
        }
    }
    cout<<i<<"\n";
    return 0;
}
