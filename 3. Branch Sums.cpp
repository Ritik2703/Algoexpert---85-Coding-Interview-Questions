#include <bits/stdc++.h>
#include <vector>
using namespace std;
class BinaryTree{
    public :
    int value;
    BinaryTree *left;
    BinaryTree *right;
    
   
    BinaryTree(int value){
        this->value = value;
        this->left  = NULL;
        this->right = NULL;
    }
};
BinaryTree *tree=NULL;
BinaryTree *insert(BinaryTree *t,int x)
{
		if(t==NULL)
		t=new BinaryTree(x);
		else{
			queue<BinaryTree *> q;
			q.push(t);
			BinaryTree *n= new BinaryTree(x);
			while(!q.empty())
			{
				BinaryTree *t= q.front();
				q.pop();
				if(!t->left)
				{
					t->left = n;
					break;
				}
				else
				q.push(t->left);
				
				if(!t->right)
				{
					t->right= n;
					break;
				}
				else
				q.push(t->right);
				
			}
		}
		return t;	\
}
void calculateBranchSums(BinaryTree *tree, int runningSum ,std::vector<int> &sums){
    if(tree == NULL){
        return;
    }
    if(tree->left == NULL && tree->right == NULL){
        sums.push_back(runningSum+tree->value);
    }
    calculateBranchSums(tree->left, runningSum+tree->value,sums);
    calculateBranchSums(tree->right,runningSum+tree->value,sums);
    return ;
}

std::vector<int> branchSum(BinaryTree *tree){
    std::vector<int> sums;
    calculateBranchSums(tree,0,sums);
    return sums;
}

int main() {
   int n,val;
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	cin>>val;
   	tree=insert(tree,val);
   }
    std::cout << "function for branch sum  ";
    vector<int> v;
    v=branchSum(tree);            //time complexity O(n)
    for(auto i:v)
    cout<<i<<" ";
    return 0;
}
