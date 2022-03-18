#include<iostream>
using namespace std;
int main()
{
	int n,x[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(int j=0;j<n;j++)
	{
		if(x[j]<=10)
		{
			cout<<"A["<<j<<"] = "<<x[j]<<endl;
		}
	}
	return 0;
}
