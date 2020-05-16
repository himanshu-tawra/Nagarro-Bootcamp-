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

class Pair{
    public:
        int height;
        int diameter;
};

Pair fastDiameter(Node* root){
    Pair p;

    if(root == NULL){
        p.diameter = 0;
        p.height = 0;
        return p;
    }
    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height,right.height) + 1;

    int op1 = left.height + right.height;
    int op2 = left.diameter;
    int op3 = right.diameter;

    p.diameter = max(op1,max(op2,op3));

    return p;
}



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





int main(){
    Node* root = buildTree();
    
    Pair ans = fastDiameter(root);

    cout<<"Height of tree : "<<ans.height<<endl;

    cout<<"Diameter of tree : "<<ans.diameter<<endl;

    return 0;

}