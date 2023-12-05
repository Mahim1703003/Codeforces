#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    scanf("%d %d",&n,&k);
    x = k * (n/k + 1);
    printf("%d\n",x);
    return 0;
}
