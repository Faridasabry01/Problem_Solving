#include<iostream>
#include<math.h>
using namespace std;
void equ(int x,int n)
{
	int s=0;
	for(int i=2;i<=n;i=i+2)
	{
		s=s+pow(x,i);
	}
	cout<<s;
}
int main()
{
	int x,n;
	cin>>x>>n;
	equ(x,n);
	return 0;
}
