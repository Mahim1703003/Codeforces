#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string x,y;
    int t,i,k=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        while(y.size()!=x.size())
            y = '0' + y;
        i = y.find_last_of("1");
        while(x[i]!='1')
        {
            k++;
            i--;
        }
        cout<<k<<"\n";
        k = 0;
    }
    return 0;
}
