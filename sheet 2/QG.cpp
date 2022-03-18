#include<iostream>
using namespace std;
int main()
{
    int n,a;
    long long t;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		t=1;
		cin>>a;
		if(a==0)
		  cout<<1<<endl;
		else
		{
			for(int j=a;j>0;j--)
		   {
			  t=t*j;
		   }
		   cout<<t<<endl;
		}
		
	 } 
	return 0;
}
