#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
    node* buildtree(node*root){
        cout<<"enter the data";
        int data;
        cin>>data;
        root = new node(data);
        if(data == -1){
            return NULL;
        }
        cout<<"enter left root element";
        root->left = buildtree(root->left);
        cout<<"enter right root element";
        root->right = buildtree(root->right);
        return root;
        
    }

int main() {
   node* root = NULL;
   root = buildtree(root);
   cout<<root;
   
    return 0;
}
