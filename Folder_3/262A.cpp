#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    int n,m,i,j,x,k=0,l=0;
    string s;
    stringstream ss;
    cin>>n>>m;
    for(j=1;j<=n;j++)
    {
        cin>>x;
        while(x)
        {
            if(x%10==4||x%10==7)
                k++;
            x = x / 10;
        }
        if(k<=m)
            l++;
        k=0;
    }
    cout<<l<<endl;
    return 0;
}
