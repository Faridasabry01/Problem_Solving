#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	long long int sum=0;
	scanf("%d",&n);
    for(int x=1;x<=n;x++)
	{
	  sum+=x;
    }
    printf("%lld",sum);
	return 0;
}
