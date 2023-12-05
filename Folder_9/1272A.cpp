#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int a[3],t,i;
    cin>>t;
    while(t--)
    {
        for(i=0;i<=2;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        sort(a,a+3);
        if(m.size()==3)
        {
            a[0]++;
            a[2]--;
            cout<<(a[1]-a[0])+(a[2]-a[0])+(a[2]-a[1])<<"\n";
        }
        else if(m.size()==2)
        {
            if(a[0]==a[1])
            {
                a[0]++;
                a[1]++;
                if(a[2]-1>=a[1])
                    a[2]--;
                cout<<(a[1]-a[0])+(a[2]-a[0])+(a[2]-a[1])<<"\n";
            }
            else if(a[1]==a[2])
            {
                a[1]--;
                a[2]--;
                if(a[0]+1<=a[1])
                    a[0]++;
                cout<<(a[1]-a[0])+(a[2]-a[0])+(a[2]-a[1])<<"\n";
            }
        }
        else
            cout<<"0\n";
        m.clear();
    }
    return 0;
}
