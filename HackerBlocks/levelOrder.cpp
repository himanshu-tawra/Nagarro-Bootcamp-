/*
Given a binary tree. Print the level order traversal, make sure each level start at a new line.

Input Format
Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL

Constraints
None

Output Format
Print the level order in which the different levels are in different lines, all the values should be in a space separated manner

Sample Input
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
Sample Output
10 
20 30 
40 50 60 73

*/


#include<iostream>
#include<queue>
using namespace std;
class Node
{
	public:
	int data;
	Node *left;
	Node *right;
	Node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

Node* create()
{
	int d;
	string exist;
	cin>>d;
	Node* root=new Node(d);
	cin>>exist;
	if(exist=="false")
	{
	root->left= NULL;
	}
	else
	{
	    root->left=create();
	}
	cin>>exist;
	if(exist=="false")
	{
    root->right= NULL;
	}
	else
	{
	root->right=create();
	}
	return root;
}
void level(Node* root)
{
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		Node *f=q.front();
		q.pop();
		if(f==NULL)
		{
			cout<<"\n";
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<f->data<<" ";
			if(f->left)
			{
				q.push(f->left);
			}
			if(f->right)
			{
				q.push(f->right);
			}	
		}
	}
}
int main() 
{
	Node *root=create();
	level(root);
	return 0;
}
