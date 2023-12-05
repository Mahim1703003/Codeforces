#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int p,red,yellow,blue,green,i,kr=0,ky=0,kb=0,kg=0;
    cin>>s;
    p = s.find("R");
    red = p % 4;
    p = s.find("Y");
    yellow = p % 4;
    p = s.find("B");
    blue = p % 4;
    p = s.find("G");
    green = p % 4;
    for(i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='!')
        {
            if(i%4==red)
                kr++;
            else if(i%4==yellow)
                ky++;
            else if(i%4==blue)
                kb++;
            else if(i%4==green)
                kg++;
        }
    }
    cout<<kr<<" "<<kb<<" "<<ky<<" "<<kg<<"\n";
    return 0;
}
