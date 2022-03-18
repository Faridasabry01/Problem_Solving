#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100],t;
	cin>>s;
	if(strlen(s)>2)
	{
	 for(int i=0;i<strlen(s)-2;i++)
	{
		for(int j=i+2;j<strlen(s);j++)
		{
		   if(s[i]>s[j])
		  {
			t=s[i];
			s[i]=s[j];
			s[j]=t;
			
		   }
		   	j++;
		}
		i++;
	}
	cout<<s;	
	}
	else if(strlen(s)<2)
	 cout<<s;
	
	return 0;
}
