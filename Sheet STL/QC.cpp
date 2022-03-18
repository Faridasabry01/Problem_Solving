#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int n,x,a,b,c;
	vector<int> v;
	cin>>n;
	while(n--)
	{
		cin>>x;
		v.push_back(x);
	}
	cin>>a;
	v.erase(v.begin()+a-1);
	cin>>b>>c;
	v.erase(v.begin()+b-1,v.begin()+c-1);
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
