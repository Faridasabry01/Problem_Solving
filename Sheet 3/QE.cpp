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
	for(int j=0;j<n;j++)
	{
		if(x[j]<min)
		{
		  min=x[j]; 
		  t=j;
		}
	}
	cout<<min<<" "<<t+1;
	
	return 0;
}
