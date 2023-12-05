#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ifstream fcin;
    ofstream fout;
    fcin.open("input.txt");
    fout.open("output.txt");
    int n,k,i;
    fcin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
        fcin>>a[i];
    i = k - 1;
    while(a[i]!=1)
        i = (i+1)%n;
    fout<<i+1<<"\n";
    return 0;
}
