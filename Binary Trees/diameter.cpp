#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            int data = d;
            left = right = NULL;
        }
};

Node* buildTree(){
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int treeHeight(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);

    return max(leftHeight,rightHeight) + 1;

}

int daimeterTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = treeHeight(root->left);
    int r = treeHeight(root->right);

    int op1 = l + r;
    int op2 = daimeterTree(root->left);
    int op3 = daimeterTree(root->right);

    return max(op1,max(op2,op3));

}

int main(){
    Node* root = buildTree();
    cout<<"Diameter of binary tree : "<<daimeterTree(root)<<endl;

    return 0;

}