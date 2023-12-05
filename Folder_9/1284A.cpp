#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <string> v1;
    vector <string> v2;
    vector <string> v3;

    int n,m,i,j,k,q,num,rem;
    string s;

    cin>>n>>m;

    for(i=1;i<=n;i++)
    {
        cin>>s;
        v1.push_back(s);
    }

    for(i=1;i<=m;i++)
    {
        cin>>s;
        v2.push_back(s);
    }

    i=0;
    j=0;
    while(1)
    {
        s = v1[i] + v2[j];
        v3.push_back(s);
        i = (i+1)%n;
        j = (j+1)%m;
        if(i==0&&j==0)
            break;
    }
    k = v3.size();

    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>num;
        rem = num % k;
        if(rem==0)
            cout<<v3[k-1]<<endl;
        else
            cout<<v3[rem-1]<<endl;
    }
    return 0;
}
