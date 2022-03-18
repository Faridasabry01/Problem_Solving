#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int n;
	long long x;
	vector<int>v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
