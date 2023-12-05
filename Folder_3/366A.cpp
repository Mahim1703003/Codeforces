#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,a,b,c,d,no,c1,c2,f=0;
    cin>>n;
    for(i=1;i<=4;i++)
    {
        cin>>a>>b>>c>>d;
        if(f!=0)
            continue;
        if(a+c<=n)
        {
            f++;
            no = i;
            c1 = a;
            c2 = n - c1;
        }
        else if(a+d<=n)
        {
            f++;
            no = i;
            c1 = a;
            c2 = n - c1;
        }
        else if(b+c<=n)
        {
            f++;
            no = i;
            c1 = b;
            c2 = n - c1;
        }
        else if(b+d<=n)
        {
            f++;
            no = i;
            c1 = b;
            c2 = n - c1;
        }
    }
    if(f!=0)
        cout<<no<<" "<<c1<<" "<<c2<<"\n";
    else
        cout<<"-1\n";
    return 0;
}
