#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	char x[100];
	cin>>n;
	cin>>x;
	for(int j=n;j>=n;j--)
	{
		i=1;
		if(x[j]=='<')
		{
			i++;
			if(i<1)
			  c++;
		} 
		else if(x[j]=='>')
		{
			i--;
		 if(i>n)
		   c++;
		}
	}
	cout<<c;
	return 0;
}
