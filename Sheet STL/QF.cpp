#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	int n,x;
	long long y;
	stack<int> s;
	cin>>n;
	while(n--)
	{
		cin>>x;
		if(x==1)
		{
			cin>>y;
			s.push(y);
		}
		else if(x==2)
		{
			if(!s.empty())
			   s.pop();
		}
		else if(x==3)
		{
			if(!s.empty())
			   cout<<s.top()<<endl;
			  else
			   cout<<"Empty!"<<endl;
		}
	}
	return 0;
}
