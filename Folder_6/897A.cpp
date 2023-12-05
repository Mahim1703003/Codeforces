#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j,l,r;
    cin>>n>>m;
    char c1,c2;
    string s;
    cin>>s;
    for(j=1;j<=m;j++)
    {
        cin>>l>>r>>c1>>c2;
        for(i=l-1;i<=r-1;i++)
        {
            if(s[i]==c1)
                s[i] = c2;
        }
    }
    cout<<s<<endl;
    return 0;
}
