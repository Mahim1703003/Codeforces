#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <long long int,long long int> r,c;
    vector <long long int> v;
    long long int n,m,i,x,y,sum=0,row,column,no_of_row=0,no_of_column=0;
    cin>>n>>m;
    while(m--)
    {
        cin>>x>>y;
        if(r[x]==0&&c[y]==0)
        {
            row = no_of_column;
            c[y]++;
            no_of_column++;
            column = no_of_row;
            r[x]++;
            no_of_row++;
            sum = sum + (2*n-(row+column+1));
        }
        else
        {
            if(c[y]==0)
            {
                row = n;
                no_of_column++;
                c[y]++;
                column = no_of_row;
                sum = sum + (2*n-(row+column));
            }
            else if(r[x]==0)
            {
                column = n;
                no_of_row++;
                r[x]++;
                row = no_of_column;
                sum = sum + (2*n-(row+column));
            }
        }
        v.push_back(n*n-sum);
    }
    for(i=0;i<=v.size()-1;i++)
        cout<<v[i]<<" ";
    cout<<"\n";
    return 0;
}
