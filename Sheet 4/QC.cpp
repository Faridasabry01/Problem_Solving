#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int x,y,f,i;
	x=a.length();
	y=b.length();
	if(x<y)
	{
		for(i=0;i<x;i++)
	   {
		  if(a[i]<b[i])
		  {
		  	f=1;
		  	break;
		   } 
		  else if(a[i]>b[i])
		    {
		      f=0;
			  break;	
			}
		  else if(a[i]==b[i])
		   f=1;
	   }
	}
	else if(y<=x)
	{
		for(i=0;i<x;i++)
	   {
		  if(a[i]<b[i])
		  {
		  	f=1;
		  	break;
		   } 
		  else if(a[i]>b[i])
		    {
		      f=0;
			  break;	
			}
			else if(a[i]==b[i])
		   f=0;
	   }
	}
	if(f==1)
	 cout<<a;
	else
	 cout<<b;
	
	
	return 0;
}
