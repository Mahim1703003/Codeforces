#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char ch[8][8],x;
    int i,j,k=0;
    for(i=0;i<=7;i++)
    {
        for(j=0;j<=7;j++)
            ch[i][j] = 'a';
    }
    for(i=2;i<=5;i++)
    {
        for(j=2;j<=5;j++)
        {
            cin>>x;
            ch[i][j] = x;
        }
    }
    for(i=2;i<=5;i++)
    {
        for(j=2;j<=5;j++)
        {
            if(ch[i][j]=='.')
            {
                if((ch[i+1][j]=='x'&&ch[i+2][j]=='x')||(ch[i+1][j]=='x'&&ch[i-1][j]=='x')||(ch[i-1][j]=='x'&&ch[i-2][j]=='x'))
                {
                    k++;
                    break;
                }
                else if((ch[i][j+1]=='x'&&ch[i][j+2]=='x')||(ch[i][j-1]=='x'&&ch[i][j+1]=='x')||(ch[i][j-1]=='x'&&ch[i][j-2]=='x'))
                {
                    k++;
                    break;
                }
                else if((ch[i+1][j+1]=='x'&&ch[i+2][j+2]=='x')||(ch[i+1][j+1]=='x'&&ch[i-1][j-1]=='x')||(ch[i-1][j-1]=='x'&&ch[i-2][j-2]=='x'))
                {
                    k++;
                    break;
                }
                else if((ch[i+1][j-1]=='x'&&ch[i+2][j-2]=='x')||(ch[i+1][j-1]=='x'&&ch[i-1][j+1]=='x')||(ch[i-1][j+1]=='x'&&ch[i-2][j+2]=='x'))
                {
                    k++;
                    break;
                }
            }
        }
        if(k!=0)
            break;
    }
    if(k!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
