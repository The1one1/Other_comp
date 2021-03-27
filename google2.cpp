#include<bits/stdc++.h>
using namespace std;
int main()

{
    
    int t,k=0;
    cin>>t;
    while(t--)
    {
    	k++;
        int x,y;
        cin>>x>>y;
        string a;
        cin>>a;
        int n=a.size();
        for(int i=0;i<n;i++) 
        {
        	
        	if(a[i]=='?')
        	{
        		int j,flop=0;
        		for(j=i+1;j<n;j++)
        		{
        			if(a[j]!='?')
        			{
        				flop=1;
        				break;
					}
				}
				if(flop==0){
					for(j=i-1;i>=0;i--)
					{
						if(a[j]!='?')
						{
							break;
						}
					}
				}
				a[i]=a[j];
			}
        }
        int cost=0;
        for(int i=0;i<(n-1);i++)
        {
        	if(a[i]=='C'&&a[i+1]=='J')
        	{
        		cost+=x;
			}
			if(a[i]=='J'&&a[i+1]=='C')
			{
				cost+=y;
			}
		}
		cout<<"case #"<<k<<": "<<cost<<"\n";
    }
}
