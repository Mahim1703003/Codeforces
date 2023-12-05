#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v1,v2,v3;
    vector <int>::iterator it;
    int n,i,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>0)
            v1.push_back(x);
        else if(x<0)
            v2.push_back(x);
        else
            v3.push_back(x);
    }
    if(v1.size()==0)
    {
        v1.push_back(v2[0]);
        v1.push_back(v2[1]);
        it = v2.begin();
        v2.erase(it,it+2);
    }
    if(v2.size()%2==0)
    {
        v3.push_back(v2[0]);
        it = v2.begin();
        v2.erase(it);
    }

    ///negative
    cout<<v2.size()<<" ";
    for(i=0;i<=v2.size()-1;i++)
        cout<<v2[i]<<" ";
    cout<<"\n";

    ///positive
    cout<<v1.size()<<" ";
    for(i=0;i<=v1.size()-1;i++)
        cout<<v1[i]<<" ";
    cout<<"\n";

    ///zero
    cout<<v3.size()<<" ";
    for(i=0;i<=v3.size()-1;i++)
        cout<<v3[i]<<" ";
    cout<<"\n";

    return 0;
}
