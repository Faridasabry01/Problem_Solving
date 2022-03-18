#include<iostream>
using namespace std;
int odd(int n)
{
	if(n%2==0)
	 return 0;
	else
	 return 1;	 
}
int pal(int n)
{
	int x,i=0,t,f=1,p;
	int a[99999];
	if(n==1)
	 return 1;
	if(n==0)
	 return 0;
	else
	{
	  p=n;
	  while(p>0)
	  {
		t=p%2;
		a[i]=t;
		i++;
		p=p/2;
	  } 
	  
	  x=i-1;
	  for(int j=0;j<=i/2;j++)
	  {
		if(a[j]!=a[x])
			return 0;
		 x--;
	   }
	 return 1;
    }
}
int main()
{
	int n,y,x;
	cin>>n;
	x=pal(n);
	y=odd(n);
//	cout<<"odd "<<y<<" pal "<<x<<endl;
	if(x==1 && y==1)
	 cout<<"YES";
	else
	 cout<<"NO";

	return 0;
}
