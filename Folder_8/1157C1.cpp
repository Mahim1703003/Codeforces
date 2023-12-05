#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    int n,i,j,m=0;
    scanf("%d",&n);//cin>>n;
    int a[n],v[n];
    char s[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    i = 0;
    j = n-1;
    while(i<=j)
    {
        if(m==0)
        {
            if(a[i]<=a[j])
            {
                v[m] = a[i];//v.push_back(a[i]);
                i++;
                s[m] = 'L';//s = s + 'L';
                m++;
            }
            else if(a[j]<a[i])
            {
                v[m] = a[j];//v.push_back(a[j]);
                j--;
                s[m] = 'R';//s = s + 'R';
                m++;
            }
        }
        else
        {
            if(a[i]<=a[j])
            {
                if(a[i]>v[m-1])
                {
                    v[m] = a[i];//v.push_back(a[i]);
                    i++;
                    s[m] = 'L';
                    m++;
                    //s = s + 'L';
                }
                else if(a[j]>v[m-1])
                {
                    v[m] = a[j];//v.push_back(a[j]);
                    j--;
                    s[m] = 'R';
                    m++;
                    //s = s + 'R';
                }
                else
                    break;
            }
            else
            {
                if(a[j]>v[m-1])
                {
                    v[m] = a[j];//v.push_back(a[j]);
                    j--;
                    s[m] = 'R';
                    m++;
                    //s = s + 'R';
                }
                else if(a[i]>v[m-1])
                {
                    v[m] = a[i];//v.push_back(a[i]);
                    i++;
                    s[m] = 'L';
                    m++;
                    //s = s + 'L';
                }
                else
                    break;
            }
        }
    }
    printf("%d\n",m);
    for(i=0;i<=m-1;i++)
        printf("%c",s[i]);
    printf("\n");
    return 0;
}
