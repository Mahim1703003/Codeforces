#include<iostream>
using namespace std;
int main()
{
    int r[6][6],i,j,a,b,c,d,e,sum=0,max=0;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
            cin>>r[i][j];
    }

    for(a=1;a<=5;a++)
    {
        for(b=1;b<=5;b++)
        {
            if(b==a)
                continue;
            for(c=1;c<=5;c++)
            {
                if(c==a || c==b)
                    continue;
                for(d=1;d<=5;d++)
                {
                    if(d==a || d==b || d==c)
                        continue;
                    for(e=1;e<=5;e++)
                    {
                        if(e==a || e==b || e==c || e==d)
                            continue;
                        sum = r[a][b]+r[b][a]+r[c][d]+r[d][c]+r[b][c]+r[c][b]+r[d][e]+r[e][d]+r[c][d]+r[d][c]+r[d][e]+r[e][d];
                        if(sum>max)
                            max = sum;
                    }

                }
            }
        }
    }
    cout<<max<<endl;

    return 0;
}
