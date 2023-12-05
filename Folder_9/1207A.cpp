#include<iostream>
using namespace std;
int main()
{
    int t,bun,patties,cutlets,dham,dchick,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>bun>>patties>>cutlets;
        cin>>dham>>dchick;
        if(dham>dchick)
        {
            while(patties--)
            {
                bun = bun - 2;
                if(bun>=0)
                    sum = sum + dham;
                else
                {
                    bun = bun + 2;
                    break;
                }
            }
            while(cutlets--)
            {
                bun = bun - 2;
                if(bun>=0)
                    sum = sum + dchick;
                else
                {
                    bun = bun + 2;
                    break;
                }
            }
            cout<<sum<<endl;
        }
        else
        {
            while(cutlets--)
            {
                bun = bun - 2;
                if(bun>=0)
                    sum = sum + dchick;
                else
                {
                    bun = bun + 2;
                    break;
                }
            }
            while(patties--)
            {
                bun = bun - 2;
                if(bun>=0)
                    sum = sum + dham;
                else
                {
                    bun = bun + 2;
                    break;
                }
            }
            cout<<sum<<endl;
        }
        sum = 0;
    }
    return 0;
}
