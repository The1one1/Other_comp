#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(i==0||a[i]>x)
            {
                x=a[i];
                if(a[i]>a[i+1]||i==n-1)
                cnt++;
            }
        }
        cout<<"Case #"<<k<<": "<<cnt<<endl;
        k++;
    }
}
