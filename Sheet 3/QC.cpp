#include<iostream>
using namespace std;
int main()
{
	int n,x[3000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(int j=0;j<n;j++)
	{
		if(x[j]>0)
		 {
		   x[j]=1;	
		 }
		else if(x[j]<0)
		 {
		   x[j]=2;	
		 }
		else
		 {
		   x[j]=0;	
		 }
	}
	for(int k=0;k<n;k++)
	{
		cout<<x[k]<<" ";
	}
	
	return 0;
}
