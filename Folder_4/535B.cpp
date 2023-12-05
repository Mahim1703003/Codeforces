#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,n,k=0;
    cin>>n;
    for(i1=4;i1<=7;i1=i1+3)
    {
        m[i1]++;
        for(i2=4;i2<=7;i2=i2+3)
        {
            m[i1*10+i2]++;
            for(i3=4;i3<=7;i3=i3+3)
            {
                m[i1*100+i2*10+i3]++;
                for(i4=4;i4<=7;i4=i4+3)
                {
                    m[i1*1000+i2*100+i3*10+i4]++;
                    for(i5=4;i5<=7;i5=i5+3)
                    {
                        m[i1*10000+i2*1000+i3*100+i4*10+i5]++;
                        for(i6=4;i6<=7;i6=i6+3)
                        {
                            m[i1*100000+i2*10000+i3*1000+i4*100+i5*10+i6]++;
                            for(i7=4;i7<=7;i7=i7+3)
                            {
                                m[i1*1000000+i2*100000+i3*10000+i4*1000+i5*100+i6*10+i7]++;
                                for(i8=4;i8<=7;i8=i8+3)
                                {
                                    m[i1*10000000+i2*1000000+i3*100000+i4*10000+i5*1000+i6*100+i7*10+i8]++;
                                    for(i9=4;i9<=7;i9=i9+3)
                                        m[i1*100000000+i2*10000000+i3*1000000+i4*100000+i5*10000+i6*1000+i7*100+i8*10+i9]++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(it=m.begin();it!=m.end();it++)
    {
        k++;
        if(it->first==n)
            break;
    }
    cout<<k<<"\n";
    return 0;
}
