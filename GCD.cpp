//#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE

		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
#endif
	



	int x,y,i,t;
	cin>>t;
	
	while(t--)
	{
	    cin>>x>>y; 	    
	    while(x!=y )
	    {
	        
	        if(x>y)
	        	x=x-y;
	        else
	        	y=y-x;	        		        
	    }
	    cout<<x<<endl;
	    
	  
	}
	


	return 0;
}

	

