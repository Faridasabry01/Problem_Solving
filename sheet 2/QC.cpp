#include<iostream>
using namespace std;
int main()
{
	int n,i,Even=0,Odd=0,Positive=0,Negative=0;
	long int x;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		if(x>0)
		{
			Positive++;
			if(x%2==0)
				Even++;
			else
			   Odd++;
			  
		}
		else if(x<0)
		{
			Negative++;
			if(x%2==0)
				Even++;
			else
			   Odd++;
		}
		else if(x==0)
		   Even++;
		  
	}
	cout<<"Even: "<<Even<<endl;
	cout<<"Odd: "<<Odd<<endl;
	cout<<"Positive: "<<Positive<<endl;
	cout<<"Negative: "<<Negative;
}
