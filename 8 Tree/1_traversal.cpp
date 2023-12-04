#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* constuctTree(){
    cout << " enter the value : ";
    int val;
    cin >> val;

    if(val == -1){
        return NULL;
    }
    TreeNode* root = new TreeNode(val);
    cout << "For left child of "<<root->data;
    root->left = constuctTree();
    cout << "For right child of "<<root->data;
    root->right = constuctTree();
    
    return root;
}

void preOrder(TreeNode* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(TreeNode* root){
    if(root == NULL){
        return;
    }
    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(TreeNode* root){
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrder(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* front = q.front();
        q.pop();
        cout << front->data << " ";
        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right != NULL){
            q.push(front->right);
        }
    }
}

void levelOrderPrint(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode* front = q.front();
        q.pop();
        if(front == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }            
        }
        else{
            cout << front->data << " ";
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            } 
        } 
    }
}

int height(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight,rightHeight) + 1;
}
int diameterOfBinaryTree(TreeNode* root) {
    if(root == NULL){
        return 0;
    }
    int op1 = diameterOfBinaryTree(root->left);
    int op2 = diameterOfBinaryTree(root->right);
    int op3 = height(root->left) + height(root->right);
    return max(op1,max(op2,op3));
}

int main(){
    TreeNode* root = constuctTree();
    //Tree : 10 20 50 65 -1 -1 90 -1 -1 70 -1 -1 30 60 -1 -1 100 -1 -1
    cout << endl;
    cout << "PreOrder traversal : ";
    preOrder(root);
    cout << endl;
    cout << "InOrder traversal : ";
    inOrder(root);
    cout << endl;
    cout << "PostOrder traversal : ";
    postOrder(root);
    cout << endl;
    cout << "LevelOrder traversal : ";
    levelOrder(root);
    cout << endl;
    cout << "LevelOrder printing : "<<endl;
    levelOrderPrint(root);
    cout << endl;

    cout << "Height of tree : " <<height(root)<< endl;
    cout << "Diameter of tree : "<< diameterOfBinaryTree(root) << endl;
    return 0; 
}