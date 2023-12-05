#include<iostream>
using namespace std;
int main()
{
    int n,m,left,right,mid,i,s,k;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(i=0;i<=m-1;i++)
        cin>>b[i];
    s = 2*n;
    int c[s];
    c[0] = 1;
    c[1] = a[0];
    for(i=2,k=1;i<=s-1;i++,k++)
    {
        c[i] = c[i-1] + 1;
        c[i+1] = c[i-1] + a[k];
        i++;
    }
    for(i=0;i<=m-1;i++)
    {
        left = 0;
        right = s-1;
        while(left<=right)
        {
            mid = (left + right) / 2;
            if(b[i]>c[mid])
                left = mid + 1;
            else if(b[i]<c[mid])
                right = mid - 1;
            else
                break;
        }
        cout<<(mid/2)+1<<endl;
    }
    return 0;
}
