#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[9999],sum=0,x,y;
	cin>>t;
	for(int p=0;p<t;p++)
	{
		sum=0;
		x=0,y=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]%2==0)
			 x++;
			else
			 y++;
		}
		if(sum%2!=0)
		 cout<<"YES"<<endl;
		else if(x!=0 && y!=0)
		  cout<<"YES"<<endl;
		else
		 cout<<"NO"<<endl;
	 } 
	return 0;
}
