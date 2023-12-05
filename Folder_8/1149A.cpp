#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,x,one=0,two=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
            one++;
        else
            two++;
    }
    if(two!=0)
    {
        cout<<"2 ";
        two--;
        if(one!=0)
        {
            cout<<"1 ";
            one--;
        }
        for(i=1;i<=two;i++)
            cout<<"2 ";
        for(i=1;i<=one;i++)
            cout<<"1 ";
        cout<<"\n";
    }
    else
    {
        for(i=1;i<=one;i++)
            cout<<"1 ";
        cout<<"\n";
    }
    return 0;
}
