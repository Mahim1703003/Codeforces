#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[55],b[55];
    cin>>a;
    int i=0,j,mid,n,k=0;
    n=strlen(a);
    mid=(n-1)/2;
    for(;;)
    {
        if(i==0){
            b[i]=a[mid];
            i++;
        }
        else
        {
            k++;
            if(a[mid+k]=='\0')
            {
                b[i]='\0';
                break;
            }
            else{
            if(mid+k>=0&&mid+k<=n-1){
                b[i]=a[mid+k];
                i++;
            }
            if(mid-k>=0&&mid-k<=n-1){
                b[i]=a[mid-k];
                i++;
            }
            }
        }
    }
    cout<<b<<endl;
    return 0;
}
