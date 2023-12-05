#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a,b,i,mina,minb,min_piece,max_piece=0;
    cin>>n>>a>>b;
    for(i=1;i<=n-1;i++)
    {
        mina = a / i;
        minb = b / (n-i);
        min_piece = min(mina,minb);
        max_piece = max(max_piece,min_piece);
    }
    cout<<max_piece<<"\n";
    return 0;
}
