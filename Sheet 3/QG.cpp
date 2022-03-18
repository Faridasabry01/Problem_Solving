#include<iostream>
using namespace std;
int main()
{
	int x,flag=1;
	long long int n,a[99999];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n==1)
	 cout<<"YES";
	else
	{
	int x=n-1;
	for(int i=0;i<=n/2;i++)
	{
	   if(a[i]!=a[x])
	  {
		flag=0;
		break;
	   }
	   x--;
	}
	if(flag==1)
	  cout<<"YES";
	else if(flag==0)
	  cout<<"NO";
	
	}
	
	return 0;
	
}
