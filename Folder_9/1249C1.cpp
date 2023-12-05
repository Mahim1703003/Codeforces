#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v,v2;
    int q,n,mult=1,sum,a,b,c,d,e,f,g,h,i,j;
    for(i=0;i<=9;i++)
    {
        if(i==0)
            v.push_back(mult);
        else
        {
            mult = mult * 3;
            v.push_back(mult);
        }
    }
    for(a=0;a<=1;a++)
    {
        for(b=0;b<=1;b++)
        {
            for(c=0;c<=1;c++)
            {
                for(d=0;d<=1;d++)
                {
                    for(e=0;e<=1;e++)
                    {
                        for(f=0;f<=1;f++)
                        {
                            for(g=0;g<=1;g++)
                            {
                                for(h=0;h<=1;h++)
                                {
                                    for(i=0;i<=1;i++)
                                    {
                                        for(j=0;j<=1;j++)
                                        {
                                            sum = a*v[0]+b*v[1]+c*v[2]+d*v[3]+e*v[4]+f*v[5]+g*v[6]+h*v[7]+i*v[8]+j*v[9];
                                            v2.push_back(sum);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    sort(v2.begin(),v2.end());
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(i=0;i<=v2.size()-1;i++)
        {
            if(v2[i]>=n)
            {
                cout<<v2[i]<<"\n";
                break;
            }
        }
    }
    return 0;
}
