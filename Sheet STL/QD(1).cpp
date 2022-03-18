#include<bits/stdc++.h>
#include<string>
#include<stack>
using namespace std;
int main() 
{
    int n, i;
    string a;
    stack<char> s;
    cin>>n;
    
    while(n--) 
	{
        s.empty();
        cin>>a;
        for (i=0;i<a.size();i++)
		{
            if (a[i]=='(' || a[i]=='[') 
			{
                s.push(a[i]);
            } 
			else if (s.empty()) 
			{
                s.push('E');
                break;
            } 
			else if (a[i] == ')' && s.top() == '(') 
			{
                s.pop();
            } 
			else if (a[i] == ']' && s.top() == '[') 
			{
                s.pop();
            } 
			else 
			{
                s.push('E');
                break;
            }
        }

        if (s.size() == 0) 
		{
            cout<<"Yes"<<endl;
        } 
		else 
		{
            cout<<"No"<<endl;
        }
    }

    return 0;
};
