#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main()
{
    deque<int>q;
    int n,y;
    string x;
    char f='f'; 
    cin>>n;
    while(n--){
        cin>>x;
        if(x=="back")
		{
            if(!q.empty()){
                if(f=='f'){
                    cout<<q.back()<<endl;
                    q.pop_back();
                } else {
                    cout<<q.front()<<endl;
                    q.pop_front();
                }
            } 
			else
			 {
                cout<<"No job for Ada?"<<endl;
            }
        } 
		else if (x=="front")
		{
             if(!q.empty())
			 {
                if(f=='f')
				{
                    cout<<q.front()<<endl;
                    q.pop_front();
                } 
				else 
				{
                   cout<<q.back()<<endl;
                   q.pop_back();
                }
            } 
			else 
			{
                cout<<"No job for Ada?"<<endl;
            }
        } 
		else if (x =="reverse")
		{
            
            if(f=='f')
			  f='r';
            else 
			 f='f';

        } 
		else if (x=="push_back")
		{
            cin>>y;
            if(f=='f')
                q.push_back(y);
            else
                q.push_front(y);
        } 
		else if (x=="toFront")
		{
            cin>>y;
            if(f=='f')
                q.push_front(y);
            else
                q.push_back(y);
        }
    }
    return 0;
}
