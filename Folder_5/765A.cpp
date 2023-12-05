#include<iostream>
#include<map>
#include<iterator>
#include<string>
using namespace std;
int main()
{
    map <string,int> m;
    ///map <string,int> m2;
    map <string,int>::iterator it;
    int n,k=0;
    string home,s,s1,s2,s3;
    cin>>n;
    cin>>home;
    while(n--)
    {
        cin>>s;
        s1 = s.substr(0,3);
        s2 = s.substr(5,3);
        s3 = s1+s2;
        m[s3]++;
    }
    for(it=m.begin();it!=m.end();it++)
    {
        s = it->first;
        s1 = s.substr(0,3);
        s2 = s.substr(3,3);
        s3 = s2 + s1;
        if(s1==home)
        {
            if(m[s3]>=m[s])
                k++;
        }
        else
        {
            if(m[s]>=m[s3])
                k++;
        }
        /*if(s2==home)
            k++;
        else
        {
            if(m[s2]==s1)
                k++;
        }*/
    }
    if(k==m.size())
        cout<<"home\n";
    else
        cout<<"contest\n";
    return 0;
}
