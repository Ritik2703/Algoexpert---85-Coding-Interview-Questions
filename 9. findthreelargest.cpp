#include<bits/stdc++.h>
using namespace std;

void findthreelargest1(int a[],int n)
{
	int x,y,z;
	x=y=z=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>x)
		{
			z=y;
			y=x;
			x=a[i];
		}
		else if(a[i]>y)
		{
			z=y;
			y=a[i];
		}
		else if(a[i]>z)
		z=a[i];
	}
	cout<<x<<" "<<y<<" "<<z<<endl;
}

void findthreelargest2(int a[],int n)    //all three are different
{
	sort(a,a+n);
	int m=0,c=1;
	for(int i=1;i<=n;i++)
	{
		if(c<4)
		{
			if(m!=a[n-i])
			{
				cout<<a[n-i]<<" ";
				m=a[n-i];
				c++;
			}
		}
		else
		break;
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	findthreelargest1(a,n);  //tc-O(n)
	findthreelargest2(a,n); //tc-O(nlogn)
	return 0;
}

