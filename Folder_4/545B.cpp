#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1,s2,s;
    int i,k=0;
    cin>>s1>>s2;
    for(i=0;i<=s1.size()-1;i++)
    {
        if(s1[i]!=s2[i])
        {
            k++;
            if(k%2==1)
                s.push_back(s1[i]);
            else
                s.push_back(s2[i]);
        }
        else
            s.push_back(s1[i]);
    }
    if(k%2==0)
        cout<<s<<"\n";
    else
        cout<<"impossible\n";
    return 0;
}
