#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,n,j;
	string a;
	cin>>n;
	for(j=0;j<n;j++)
	{
		int f=0;
		cin>>a;
		for(i=0;i<a.length()-2;i++)
		{
			if(a[i]=='0'&&a[i+1]=='1'&&a[i+2]=='0')
			{
				f=1;
				break;
			}
			else if(a[i]=='1'&&a[i+1]=='0'&&a[i+2]=='1')
			{
				f=1;
				break;
			}
		}
		if(f==1)
		 cout<<"Good"<<endl;
		else
		 cout<<"Bad"<<endl;
	}
	return 0;
}
