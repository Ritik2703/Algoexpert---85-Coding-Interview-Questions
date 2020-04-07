#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,X;
	cin>>n;  //size of array
	int A[n];
	for(int i=0;i<n;i++)
	cin>>A[i];                  //array elements
	cin>>X;   //target sum

    // time complexity- O(n)     using hashing
    
    map<int,int> m;  //map to store number to its index
   
    for(int i=0;i<n;i++)
    {
    	int r= X- A[i];
    	if(m.find(r)!=m.end())
    	{
    	//	cout<<m[r]<<" "<<i+1<<" ";         return index
    			cout<<r<<" "<<A[i]<<" ";       //return number
		}
		if(m.find(A[i])==m.end())
		{
			m[A[i]]=i+1;
		}
	}
    


/*
 // time complexity- O(nlogn)     using two pointer
        
	sort(A,A+n);
    int i = 0; 
    int j = n - 1; 
    
    while (i < j) { 
        if (A[i] + A[j] == X) 
        {
            //cout<<i<<" "<<j<<" ";
             cout<<A[i]<<" "<<A[j]<<" ";
            break;
        }
        else if (A[i] + A[j] < X) 
            i++; 
        else
            j--; 
    } 
//*/
	
/*
    time complexity - O(n^2)  using brute force

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i]+A[j]==X)
			{
				//cout<<i<<" "<<j<<" ";    return index
				cout<<A[i]<<" "<<A[j]<<" ";  //return  number
				break;
			}
		}
	}

*/	

    return 0;
	
}
