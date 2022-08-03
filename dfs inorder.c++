#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left,*right;
    /* data */
};

Node* newNode(int data){


    Node* temp=new Node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}

// print the tree inorder
void printInorder(struct Node* node)
{
    /* data */
    if(node==NULL)
    return;

    
    printInorder(node->left);
    cout<<node->data<<endl;
    printInorder(node->right);


};




int main(){


    struct Node* root=newNode(100);
    root->left=newNode(90);
    root->left->left=newNode(70);
    root->right=newNode(80);

    printInorder(root);




}
