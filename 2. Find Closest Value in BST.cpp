  
#include<bits/stdc++.h>
using namespace std;
int num,val;
class node{
	public:
		int data;
		node *left;
		node *right;
		node(int n)
		{
			data=n;
			left=right=NULL;
		}
};

node *tree= NULL;

node *insertelement(node *tree, int val)       //insert element in bst
{
	node *n= new node(val);
//	node *nodeptr, *parentptr;
	if(tree==NULL)
	{
		tree= n;
	}
	if(val< tree->data)
	tree->left= insertelement(tree->left,val);
	else if(val>tree->data)
	tree->right= insertelement(tree->right, val);
	/*else{
		parentptr= NULL;
		nodeptr = tree;
	while(nodeptr!=NULL)
	{
		parentptr= nodeptr;
		if(val<nodeptr->data)
		   nodeptr=nodeptr->left;
		else
		nodeptr= nodeptr->right;
	}
	if(val<parentptr->data)
	 parentptr=parentptr->left;
	 else
	 parentptr=parentptr->right;
}*/
    return tree;
}
void fc(node *t,int x,int &mi,int &minkey)
{
	if(t==NULL)
	return;
	
	if(t->data==x)
	{
		minkey=x;
		return;
	}
	if(mi> abs(t->data - x))
	{
		mi = abs(t->data - x);
		minkey= t->data;
	}
	if(x<t->data)
	fc(t->left,x,mi,minkey);
	else
	fc(t->right,x,mi,minkey);
}
int findclosest(node *tree,int x)
{
	int mi=INT_MAX,minkey=-1;
	fc(tree,x,mi,minkey);
	
	return minkey;
}
int main()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>val;
	tree = insertelement(tree,val);
}
   cin>>x;
   cout<<findclosest(tree,x);      //time complexity O(logn)/O(h), h is height of tree
   
   return 0;
}
