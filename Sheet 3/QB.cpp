#include<iostream>
using namespace std;
int main()
{
	int f=0,i;
	long long int a[99999],x,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			cout<<i;
			f=1;
			break;
		}
	}
	if(f==0)
	 cout<<"-1";
	return 0;
}
