#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    string s;
    int i,j,k,n,ct=0;
    cin>>s;
    n = s.size();
    i = 0;
    j = n-1;
    while(1)
    {
        while(i<=n-1)
        {
            if(s[i]=='(')
                break;
            i++;
        }
        while(j>=0)
        {
            if(s[j]==')')
                break;
            j--;
        }
        if(i<j)
        {
            ct++;
            v.push_back(i+1);
            v.push_back(j+1);
            i++;
            j--;
        }
        else
            break;
    }
    if(ct==0)
        cout<<"0\n";
    else
    {
        cout<<"1\n"<<ct*2<<"\n";
        sort(v.begin(),v.end());
        for(i=0;i<=v.size()-1;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
