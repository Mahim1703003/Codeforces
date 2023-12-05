#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    vector <int> v;

    int n,d,i,k=0,x=1;
    cin>>n>>d;
    cin>>s;
    s = " " + s;

    for(i=1;i<=n;i++)
    {
        if(s[i]=='1')
            v.push_back(i);
    }

    for(i=1;i<=v.size()-1;i++)
    {
        if(v[i]>x+d)
        {
            k++;
            x = v[i-1];
            if(v[i]>x+d)
            {
                cout<<"-1\n";
                return 0;
            }
        }
    }
    cout<<k+1<<"\n";
    return 0;
}
