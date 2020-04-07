#include<bits/stdc++.h>
using namespace std;

int fib4(int n)           // tc- O(1) , sc - O(1) in this method 
// directly implement the formula for nth term in the fibonacci series.
//Fn = {[(v5 + 1)/2] ^ n} / v5
{
	double phi = (1+ sqrt(5))/2;
	return round(pow(phi,n)/sqrt(5));
}
/*int fib3(int n)             // tc - O(n) sc- O(1)
{
	int a=0,b=1,c;
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return b;
}
*/
/*
int fibusingdp(int n)       // tc - O(n)  sc- O(n)
{
	int f[n];
	f[0]=0,f[1]=1;	
	for(int i=2;i<=n;i++)
	f[i]=f[i-1]+f[i-2];
	
	return f[n];
}
*/
/*
int fibusingrecursion(int n) // time complexity - O(2^n)  , sc- O(n)
{
	if(n<=1)
	return n;
	return fibusingrecursion(n-1)+fibusingrecursion(n-2);
} */



int main()
{
	int n;
	cin>>n;
	cout<<fib4(n);       //formula based
//	cout<< fib3(n);         //space optimization
//  cout<<fibusingdp(n);         //dp
//	cout<<fibusingrecursion(n);  //recursion


	return 0;
}
