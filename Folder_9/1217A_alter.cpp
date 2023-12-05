#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,stren,intel,exp,i,left,right,mid,t_stren,t_intel;
    cin>>t;
    while(t--)
    {
        cin>>stren>>intel>>exp;
        left = 0;
        right = exp;
        while(left<=right)
        {
            mid = (left + right) / 2;
            t_stren = stren + exp - mid;
            t_intel = intel + mid;
            if(t_stren>t_intel)
                left = mid + 1;
            else
                right = mid - 1;
        }
        cout<<left<<"\n";
    }
    return 0;
}
