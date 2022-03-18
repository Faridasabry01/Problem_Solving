#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int i,sum=0;
	cin>>a;
	for(i=0;i<a.length();i++)
	{
		sum=sum+(a[i]-'0');
	}
	cout<<sum;
	return 0;
}
