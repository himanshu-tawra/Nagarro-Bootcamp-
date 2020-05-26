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


int heightBT(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = heightBT(root->left);
    int rightHeight = heightBT(root->right);

    int height = max(leftHeight,rightHeight)+1;

    return height;

}
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int diameterBT(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = heightBT(root->left);
    int rightHeight = heightBT(root->right);

    int firstOption = leftHeight+rightHeight;
    int secondOption = diameterBT(root->left);
    int thirdOption = diameterBT(root->right);

    return max(firstOption,max(secondOption,thirdOption));
}



int main(){

    Node* root = createBT();
    
    
    cout<<"Preorder"<<endl;
    preOrder(root);
    cout<<endl;

    int treeHeight = heightBT(root);

    cout<<"Height of tree : "<<treeHeight<<endl;

    int dia = diameterBT(root);

    cout<<"Diameter of tree : "<<dia<<endl;
  
    return 0;
}