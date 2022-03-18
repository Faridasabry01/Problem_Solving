#include<iostream>
#include<math.h>
using namespace std;
void prime(long long x)
{
	long long i;
	if(x<2)
	 cout<<"NO"<<endl;
	else if(x==2)
	 cout<<"YES"<<endl;
	else if(x>2)
	{
		for(i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				cout<<"NO"<<endl;
				return;
			}
		}
		cout<<"YES"<<endl;
	}
}
int main()
{
	int n,i;
	long long x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		prime(x);
	}
	return 0;
}
