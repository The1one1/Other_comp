#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=0;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        vector<int> l;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            l.push_back(x);
        }
       
        int y=0;
        for(int i=0;i<(l.size()-1);i++)
        {
        	
        int j=min_element(l.begin()+i,l.end())-l.begin();
        if(j!=i)
        {
		    reverse(l.begin()+i,l.begin()+j+1);
		}
        y=y+j-i+1;
        }
        k++;
        cout<<"Case #"<<k<<": "<<y<<endl;
    }
}

