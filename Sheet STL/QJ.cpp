#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<string>v;
	string x;
	int n,f;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<n;i++)
	{
		f=1;
		for(int j=i-1;j>=0;j--)
	    {
		   if(v[i]==v[j])
		   {
		   	 f=0;
		   	 cout<<"YES"<<endl;
		   	 break;
		   }
	    }
	    if(f==1)
	     cout<<"NO"<<endl;
	}
}
