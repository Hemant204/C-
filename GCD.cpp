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
			
		//Euclidean Algorithm
		/*int gcd(int x, int y, int z) {
		    int gcd_xy = gcd(x, y);
		    return gcd(gcd_xy, z);
		}

		int gcd(int x, int y) {
		    while (y != 0) {
			int temp = y;
			y = x % y;
			x = temp;
		    }*/
    		
	


	return 0;
}

	

