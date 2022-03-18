#include<iostream>
using namespace std;
int main()
{
	int n,x[1000],t,min=10000;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<<x[i]<<" ";
	}
	 
	return 0;
}
