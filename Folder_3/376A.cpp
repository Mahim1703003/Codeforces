#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int pivot,i,x;
    long long int left=0,right=0;
    cin>>s;
    pivot = s.find("^");
    for(i=0;i<=pivot-1;i++)
    {
        if(s[i]=='=')
            continue;
        x = s[i] - '0';
        left = left + (x*(pivot-i));
    }
    for(i=pivot+1;i<=s.size()-1;i++)
    {
        if(s[i]=='=')
            continue;
        x = s[i] - '0';
        right = right + (x*(i-pivot));
    }
    if(left>right)
        cout<<"left\n";
    else if(left<right)
        cout<<"right\n";
    else
        cout<<"balance\n";
    return 0;
}
