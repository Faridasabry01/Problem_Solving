#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,sum=0,a[100000];
    cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sum=abs(sum);
	cout<<sum;
	return 0;
}
