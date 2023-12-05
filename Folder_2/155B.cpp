#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int n,i,point=0,cardpick=0,k=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i]>>b[i];
        if(b[i]!=0)
        {
            point = point + a[i];
            cardpick = cardpick + b[i];
            k++;
        }
        else
            v.push_back(a[i]);
    }
    sort(v.begin(),v.end(),greater<int>());
    if(k!=0)
    {
        cardpick = cardpick - (k-1);
        if(v.size()!=0)
        {
            i = 0;
            while(cardpick--)
            {
                point = point + v[i];
                i++;
                if(i==v.size())
                    break;
            }
        }
    }
    else
        point = point + v[0];
    cout<<point<<"\n";
    return 0;
}
