#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,k=0,ct=0;
    cin>>n>>m;
    while(1)
    {
        if(n>=m)
        {
            if(n-2>=0)
                n = n - 2;
            else
                k++;
            if(m-1>=0)
                m = m - 1;
            else
                k++;
        }
        else
        {
            if(m-2>=0)
                m = m - 2;
            else
                k++;
            if(n-1>=0)
                n = n - 1;
            else
                k++;
        }
        if(k==0)
            ct++;
        else
            break;
    }
    cout<<ct<<"\n";
    return 0;
}
