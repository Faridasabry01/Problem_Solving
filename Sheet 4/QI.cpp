#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,x,f=1;
	string a;
	cin>>a;
	x=a.length()-1;
	for(i=0;i<=a.length()/2;i++)
	{
		if(a[i]!=a[x])
		{
			cout<<"NO";
			f=0;
			break;
		}
		x--;
	}
	if(f==1)
	 cout<<"YES";
	return 0;
}
