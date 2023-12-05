#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int da,db;
    cin>>da>>db;
    if(da+1==db)
        cout<<da<<" "<<db<<"\n";
    else if(da==db)
        cout<<da*10+1<<" "<<db*10+2<<"\n";
    else
    {
        if(da==9&&db==1)
            cout<<da<<" "<<db*10<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}
