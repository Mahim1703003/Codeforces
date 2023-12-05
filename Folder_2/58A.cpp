#include<iostream>
using namespace std;
int main()
{
    int i,j,k,p,h=0,l=0,e=0,o=0;
    char a[103];
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='h')
        {
            h++;
            for(j=i+1;a[j]!='\0';j++)
            {
                if(a[j]=='e')
                {
                    e++;
                    for(k=j+1;a[k]!='\0';k++)
                    {
                        if(a[k]=='l')
                        {
                            l++;
                            if(l==2)
                            {
                                for(p=k+1;a[p]!='\0';p++)
                                {
                                    if(a[p]=='o')
                                    {
                                        o++;
                                        break;
                                    }
                                }
                                if(o==0)
                                    break;
                                if(h+e+l+o==5)
                                    break;
                            }
                        }
                    }
                    if(l!=2||o==0)
                        break;
                    if(h+e+l+o==5)
                        break;
                }
            }
            if(e==0||l!=2||o==0)
                break;
            if(h+e+l+o==5)
                break;
        }
    }
    if(h+e+l+o==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
