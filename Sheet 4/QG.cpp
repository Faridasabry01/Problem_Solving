#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i;
	string a;
	getline(cin,a);
	for(i=0;i<a.length();i++)
	{
		if(a[i]==',')
		 a[i]=' ';
		else if (a[i]>64 && a[i]<91)
		 a[i]=a[i]+32;
		else if(a[i]>96 && a[i]<123)
		 a[i]=a[i]-32;
	}
	cout<<a;
	return 0;
}
