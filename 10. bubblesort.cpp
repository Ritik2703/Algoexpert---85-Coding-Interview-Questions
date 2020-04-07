#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	bool swapped;
	for(int i=0;i<n;i++)           // tc-- O(n2) 
	{
		swapped=false;
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			swap(a[j],a[j+1]);
            swapped=true;
            }
            
		}
		if(swapped==false)
		break;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	return 0;
}
