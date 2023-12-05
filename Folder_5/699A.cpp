#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,i,d,k=0;
    cin>>n;
    cin>>s;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-2;i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            k++;
            if(k==1)
                d = a[i+1] - a[i];
            else
            {
                if(a[i+1]-a[i]<d)
                    d = a[i+1] - a[i];
            }
        }
    }
    if(k!=0)
        cout<<d/2<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
