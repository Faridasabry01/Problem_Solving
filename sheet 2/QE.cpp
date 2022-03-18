#include<iostream>
using namespace std;
int main()
{
	int n,i;
	long long int x,max=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		if(x>max)
		 max=x;
	}
	cout<<max;
	return 0;
}
