#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    string s;
    cin>>s;
    for(j=1;j<=m;j++)
    {
        for(i=0;i<=n-2;i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
