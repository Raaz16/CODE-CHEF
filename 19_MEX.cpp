#include <bits/stdc++.h>
using namespace std;

int main() {
	//cout<<"GfG!";
	int t;
	cin>>t;
	while(t--)
	{
	   int n,k;
	   cin>>n>>k;
	   int a[1000000],b[n];
	   for(int i=0;i<1000000;i++)
	   a[i]=0;
	   for(int i=0;i<n;i++)
	   cin>>b[i];
	   for(int i=0;i<n;i++)
	   {
	       a[b[i]]++;
	   }
	    for(int i=0;i<1000000;i++)
	    {
	        if(k==0 && a[i]==0)
	        {
	            cout<<i<<endl;
	            break;
	        }
	        else if(a[i]==0)
	        k--;
	    }
	}
	return 0;
}