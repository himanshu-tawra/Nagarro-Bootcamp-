#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            data = d;
            left = right = NULL;
        }
};

class Pair{
    public:
        int height;
        int diameter;
};

Node* createBT(){

    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);
    root->left = createBT();
    root->right = createBT();

    return root;
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


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
    
    int firstOption = left.height + right.height;
    int secondOption = left.diameter;
    int thirdOption = right.diameter;

    p.diameter = max(firstOption,max(secondOption,thirdOption));
    return p;

}



int main(){

    Node* root = createBT();
    
    
    cout<<"Preorder"<<endl;
    preOrder(root);
    cout<<endl;

    Pair heightDia = fastDiameter(root);
    
    cout<<"Height of tree : "<<heightDia.height<<endl;

    cout<<"Diameter of tree : "<<heightDia.diameter<<endl;

    return 0;
}