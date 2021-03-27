#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k=0;
	cin>>t;

	 
	 	first:
	 while(t--)
	 {
	 	srand(time(0));
	 	int n,c;
	     cin>>n>>c;
	     vector<int> l;
	 
	 	for(int i=0;i<n ;i++)
	 	{
	 	    int x=(rand()%n)+1;
			l.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			cout<<l[i]<<" ";
		}
		/*int y=0;
        for(int i=0;i<(l.size()-1);i++)
        {
        	
        int j=min_element(l.begin()+i,l.end())-l.begin();
        if(j!=i)
        {
		    reverse(l.begin()+i,l.begin()+j+1);
		}
        y=y+j-i+1;
        }
        if(y==c)
        {
        k++;
        cout<<"Case #"<<k<<": ";
        for(int i=0;i<n;i++)
        {
        	cout<<l[i]<<" ";
		}
		}
		else
		{
			
		}*/goto first;
	 }
}
