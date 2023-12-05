#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1,s2;
    int i,j,ct=0,l1,l2,k=0;
    cin>>s1>>s2;
    l1 = s1.size();
    l2 = s2.size();
    for(i=0;i<=l1-l2;i++)
    {
        for(j=0;j<=l2-1;j++)
        {
            if(s1[i+j]==s2[j])
                ct++;
            else
                break;
        }
        if(ct==l2)
        {
            k++;
            i = i + (j-1);
        }
        ct = 0;
    }
    cout<<k<<"\n";
    return 0;
}
