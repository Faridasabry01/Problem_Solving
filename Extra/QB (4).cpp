#include<iostream>
using namespace std;
int main()
{
	int n,a[100],x=0,y=0,c=0,sum=0,av;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	av=sum/n;
	for(int i=0;i<n;i++)
	{
		if(a[i]>av)
		{
			x=x+a[i];
			c++;
		}
		else
	    {
	    	y=y+a[i];
	      /*if(y>=x)
	      {
	      	x=x+a[i];
	      	y=y-a[i];
	      	c++;
		  }*/
		}  
	}
	cout<<c;
	return 0;
}
