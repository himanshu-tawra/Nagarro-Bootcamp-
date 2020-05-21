/*
Given preorder and inorder create the tree

Input Format
Enter the size of the preorder array N then add N more elements and store in the array denoting the preorder traversal of the tree. Then enter the size of the inorder array M and add M more elements and store the inorder traversal of the array.

Constraints
1 <= N, M <= 10^4

Output Format
Display the tree using a modified preorder function. For each node , first print its left child's data , then the data of the root itself , then the data of its right child. Do this for each node in a new line in preorder manner. If one of the children does not exist print END in its place. Refer to the sample testcase.

Sample Input
3
1 2 3
3
3 2 1
Sample Output
2 => 1 <= END
3 => 2 <= END
END => 3 <= END
Explanation
The above tree looks like

         1
       /
     2
   /
 3


*/

#include<iostream>
using namespace  std;

class node{
public:
	int data;
	node * left;
	node * right;

	node(int d){
		data = d;
		left = right = NULL;
	}
};

int k = 0;
node * buildTree(int *pre, int *in, int s, int e){
	if(s > e){
		return NULL;
	}

	int data = pre[k++];
	node * root  = new node(data);

	int j = -1;
	for (int i = s; s <= e; i++)
	{
	  if(in[i] == data){
	  	j = i;
	  	break;
	  }
	}
	root->left = buildTree(pre,in,s,j-1);
	root->right= buildTree(pre,in,j+1,e);
	return root;
}

void display(node * root){
	if(root == NULL){
		return;
	}

	if(root->left){
		cout<<root->left->data;
	}

	else{
		cout<<"END";
	}

	 cout<<" => "<<root->data<<" <= ";

	if(root->right){
		cout<<root->right->data << endl;
	}

	else{
		cout<<"END"<<endl;
	}
	display(root->left);
	display(root->right);
}

int main()
{
	node  * root = NULL;
int n;
cin>>n;
int pre[n];

for (int i = 0; i < n; i++)
{
	cin>>pre[i];
}

cin>>n;
int in[n];
for (int i = 0; i < n; i++)
{
	cin>>in[i];
}

root = buildTree(pre, in, 0, n-1);

display(root);

	return 0;
	
}
