#include <bits/stdc++.h>
using namespace std;
int main() 
{
	char x[1010];
    int c=0,f,a;
    gets(x);
    for (int i=1; i<strlen(x)-1; i += 3) 
	{
		f=0;
		a=x[i];
        for (int j = i; i >=1; i-=3) 
	    {
             if(x[j]!=a)
              f=1;
            else
             f=0;
        }
        if(f==1)
         c++;
    }
    cout << c;
    return 0;
}
