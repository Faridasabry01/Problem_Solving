#include<iostream>
using namespace std;
void prnt(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<i;
		if(i!=n)
		 cout<<" ";
	 } 
	 
}
int main()
{
	int n;
	cin>>n;
	prnt(n);
	return 0;
}
