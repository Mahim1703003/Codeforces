#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int n1,n2,n3;
    char ch1,ch2,ch3;
    cin>>n1>>ch1>>n2>>ch2>>n3>>ch3;
    if(ch1==ch2&&ch2==ch3&&ch3==ch1)
    {
        v.push_back(n1);
        v.push_back(n2);
        v.push_back(n3);
        sort(v.begin(),v.end());
        if(v[0]==v[2]||(v[0]+1==v[1]&&v[1]+1==v[2]))
            cout<<"0\n";
        else if(v[1]-v[0]<=2||v[2]-v[1]<=2)
            cout<<"1\n";
        else
            cout<<"2\n";
    }
    else if(ch1==ch2)
    {
        v.push_back(n1);
        v.push_back(n2);
        sort(v.begin(),v.end());
        if(v[1]-v[0]<=2)
            cout<<"1\n";
        else
            cout<<"2\n";
    }
    else if(ch2==ch3)
    {
        v.push_back(n2);
        v.push_back(n3);
        sort(v.begin(),v.end());
        if(v[1]-v[0]<=2)
            cout<<"1\n";
        else
            cout<<"2\n";
    }
    else if(ch1==ch3)
    {
        v.push_back(n1);
        v.push_back(n3);
        sort(v.begin(),v.end());
        if(v[1]-v[0]<=2)
            cout<<"1\n";
        else
            cout<<"2\n";
    }
    else
        cout<<"2\n";
    return 0;
}
