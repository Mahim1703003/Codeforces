#include<iostream>
#include<map>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m;
    string s;
    int t,i,n,a,b,c,rock,paper,scissors,l,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a>>b>>c;
        cin>>s;
        for(i=0;i<=s.size()-1;i++)
            m[s[i]]++;
        rock = min(a,m['S']);
        a = a - rock;
        paper = min(b,m['R']);
        b = b - paper;
        scissors = min(c,m['P']);
        c = c - scissors;
        l = ceil((n*1.0)/2.0);
        sum = rock + paper + scissors;
        if(sum>=l)
        {
            cout<<"YES\n";
            for(i=0;i<=s.size()-1;i++)
            {
                if(s[i]=='R')
                {
                    if(paper!=0)
                    {
                        cout<<"P";
                        paper--;
                    }
                    else
                    {
                        if(a>0)
                        {
                            cout<<"R";
                            a--;
                        }
                        else if(b>0)
                        {
                            cout<<"P";
                            b--;
                        }
                        else if(c>0)
                        {
                            cout<<"S";
                            c--;
                        }
                    }
                }
                else if(s[i]=='P')
                {
                    if(scissors!=0)
                    {
                        cout<<"S";
                        scissors--;
                    }
                    else
                    {
                        if(a>0)
                        {
                            cout<<"R";
                            a--;
                        }
                        else if(b>0)
                        {
                            cout<<"P";
                            b--;
                        }
                        else if(c>0)
                        {
                            cout<<"S";
                            c--;
                        }
                    }
                }
                else if(s[i]=='S')
                {
                    if(rock!=0)
                    {
                        cout<<"R";
                        rock--;
                    }
                    else
                    {
                        if(a>0)
                        {
                            cout<<"R";
                            a--;
                        }
                        else if(b>0)
                        {
                            cout<<"P";
                            b--;
                        }
                        else if(c>0)
                        {
                            cout<<"S";
                            c--;
                        }
                    }
                }
            }
            cout<<"\n";
        }
        else
            cout<<"NO\n";
        m.clear();
    }
    return 0;
}
