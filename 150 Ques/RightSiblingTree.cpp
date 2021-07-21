#include<bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTree {
    public:
    T data ;
    BinaryTree*left;
    BinaryTree*right;
    BinaryTree(T data ){
        this ->data = data ;
        left = NULL;
        right = NULL;

    }
    ~BinaryTree(){
        delete left ;
        delete right;
    }

};
BinaryTree<int>* takeinput_levelwise(){
    int rootdata ;
    cin>>rootdata;
    if(rootdata == -1)return NULL;

    BinaryTree<int>* root = new BinaryTree<int>(rootdata);
    queue<BinaryTree<int>*> pn;
    pn.push(root);

    while(!pn.empty()){
        BinaryTree<int>* front = pn.front();
        pn.pop();
        cout<<"Enter the left child of : "<<front->data<<endl;
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata != -1){
            BinaryTree<int>* leftchild = new BinaryTree<int>(leftchilddata);
            front->left = leftchild;
            pn.push(leftchild);
        }
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata != -1){
            BinaryTree<int>* rightchild = new BinaryTree<int>(rightchilddata);
            front->right = rightchild;
            pn.push(rightchild);
        }
    }
    return root;
}
void inorder(BinaryTree<int>* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<endl;
    inorder(root->left);
    
}
int main(){

}