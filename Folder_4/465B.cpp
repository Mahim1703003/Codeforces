#include<iostream>
using namespace std;
int main(){

		int n,i,k=0;
		cin>>n;
		int a[n];
		for(i=0;i<=n-1;i++)
			cin>>a[i];
		for(i=0;i<=n-1;i++)
		{
			if(a[i]==1)
			{
				k++;
				if(i==n-1)
					break;
				else
				{
					if(a[i+1]==0)
					{
						k++;
						i++;
					}
				}
			}
		}
		if(a[n-1]==0&&k!=0)
			k--;
		cout<<k<<endl;
	}
