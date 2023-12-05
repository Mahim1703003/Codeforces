#include<iostream>
using namespace std;
int main()
{
    int m,s,i,j,sum=0;
    cin>>m>>s;
    if((s>m*9)||(m>1&&s==0))
        cout<<"-1 -1\n";
    else
    {
        int a[m],b[m];
        for(i=0;i<=m-1;i++)
        {
            if(i==m-1)
            {
                a[i] = s - sum;
                continue;
            }
            for(j=9;j>=0;j--)
            {
                sum = sum + j;
                if(sum<s)
                {
                    a[i] = j;
                    break;
                }
                else
                    sum = sum - j;
            }
        }
        for(i=m-1;i>=0;i--)
            cout<<a[i];
        cout<<" ";
        sum = 0;
        for(i=0;i<=m-1;i++)
        {
            for(j=9;j>=0;j--)
            {
                sum = sum + j;
                if(sum<=s)
                {
                    b[i] = j;
                    break;
                }
                else
                    sum = sum - j;
            }
        }
        for(i=0;i<=m-1;i++)
            cout<<b[i];
        cout<<endl;
    }
    return 0;
}
