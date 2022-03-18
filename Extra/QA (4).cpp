#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[99999],f,t=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<=n/2;i++)
	{
		f=1;
		if(a[i]==a[i+1])
		  i++;
		if(a[i]>a[0])
		  break;
		else
		{
		   for(int j=0;j<n;j++)
		   {
			 if(a[j]==a[j+1])
			  j++;
			 if(a[j]%a[i]!=0)
			  {
				f=0; 
				break;
			  }
		   }
		   if(f==1)
		   {
			 cout<<a[i]<<" ";
			  t=1;
		    } 
		}	
	}
	if(t==0)
	 cout<<-1;
	return 0;
}
