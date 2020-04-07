#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,c=0;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int l=0,r=n-1;
	while(l<=r)                  //tc- O(logn)  , sc- O(1)
	{
		int mid=l+(r-l)/2;
		if(a[mid]==x)
		{
			c++;
			cout<<"found at "<<mid<<endl;
			break;
		}
		if(a[mid]<x)
		l=mid+1;
		else
		r=mid-1;		
	}
	if(c==0)
	cout<<"not found"<<endl;
	
}
