#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //vector <string> v;
    string s,s1,s2,t;
    int n,k,i,j,l=-1;
    char ch = '0';
    cin>>n>>k>>t;
    i = 0;
    j = n-1;
    while(i<=j)
    {
        s1 = s1 + t[i];
        s2 = t[j] + s2;
        if(s1==s2)
        {
            //v.push_back(s1);
            l = s1.size();
            while(s.size()<=t.size())
            {
                s = s + s1;
                if(s==t)
                {
                    ch = '1';
                    break;
                }
            }
            s.clear();
        }
        if(ch=='1')
            break;
        i++;
        j--;
    }
    //l = v.size();
    if(ch=='1')
    {
        k--;
        while(k--)
            t = t + s1;
        cout<<t<<"\n";
    }
    else
    {
        if(l==-1)
        {
            while(k--)
                s = s + t;
            cout<<s<<"\n";
        }
        else
        {
            s = t.substr(l);
            k--;
            while(k--)
                t = t + s;
            cout<<t<<"\n";
        }
    }
    return 0;
}
