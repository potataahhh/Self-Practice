// O(n^2)
//O(n)

#include<bits/stdc++.h>
using namespace std;


struct Node{
	int data;
	struct Node* left;
	struct Node* right;

	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};

// function to find the height of the tree


int height(Node* root){
if(root==NULL) return 0;

	int lh = height(root->left);
	int rh = (height(root->right));

	return max(lh,rh)+1;
}

// check if the tree is balanced on not

bool isBalanced(Node* root){
	if(root==NULL) return true;

	// check for the left subtree

	if(isBalanced(root->left)==false) {
		return false;
	}

	// check for the right subtree

	if(isBalanced(root->right)==false) {
		return false;
	}

	// check for the root 
	// find the height of the tree

	int lh = height(root->left);
	int rh = height(root->right);

	if(abs(lh-rh)<=1){
		return true;
	}
	else{
		return false;
	}
}


int main(){

	struct Node* root1 = new Node(1);
	root1->left = new Node(2);
	root1->right = new Node(3);
	root1->left->left = new Node(4);
	root1->left->right = new Node(5);
	root1->right->left = new Node(6);
	root1->right->right = new Node(7);

	struct Node* root2 = new Node(1);
	root2->left = new Node(2);
	// root1->right = new Node(3);
	root2->left->left = new Node(3);
	// root1->left->right = new Node(5);
	// root1->right->left = new Node(6);
	// root1->right->right = new Node(7);

	if(isBalanced(root1)){
		cout<<"Balanced"<<endl;
	}
		else{
			cout<<"Unbalanced"<<endl;
		}

	if(isBalanced(root2)){
		cout<<"Balanced"<<endl;
	}
	else{
		cout<<"Unbalanced"<<endl;
	}
	
	return 0;
}


// O(n)
// O(n)

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;

	Node(int val){
		data=val;
		 left = NULL;
		 right = NULL;
	}
};

bool isBalanced(Node* root, int* height){
	if(root==NULL){
		return true;
	}

	int lh=0,rh=0;

	if(isBalanced(root->left,&lh)==false){
		return false;
	}

	if(isBalanced(root->right,&rh)==false){
		return false;
	}

	*height=max(lh,rh)+1;

	if(abs(lh-rh)<=1){
		return true;
	}
	else{
		return false;
	}
}


int main(){

	struct Node* root1 = new Node(1);
	root1->left = new Node(2);
	root1->right = new Node(3);
	root1->left->left = new Node(4);
	root1->left->right = new Node(5);
	root1->right->left = new Node(6);
	root1->right->right = new Node(7);

	struct Node* root2 = new Node(1);
	root2->left = new Node(2);
	// root1->right = new Node(3);
	root2->left->left = new Node(3);
	// root1->left->right = new Node(5);
	// root1->right->left = new Node(6);
	// root1->right->right = new Node(7);

	int height=0;
	if(isBalanced(root1,&height)){
		cout<<"Balanced"<<endl;
	}
		else{
			cout<<"Unbalanced"<<endl;
		}

	if(isBalanced(root2,&height)){
		cout<<"Balanced"<<endl;
	}
	else{
		cout<<"Unbalanced"<<endl;
	}
	
	return 0;
}



// Level-order-traversal

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution{
public:

vector<vector<int>> levelOrder(TreeNode* root) {

	

	vector<vector<int>> res;
	if(root==NULL) return res;
	queue<TreeNode*> q;
	q.push(root);

	while(!q.empty()){
		int size=q.size();

		vector<int> level;

		for(int i=0;i<size;i++){
			TreeNode* node = q.front();
			q.pop();

			if(node->left!=NULL)
				q.push(node->left);

			if(node->right!=NULL)
				q.push(node->right);

			level.push_back(node->val);
		}
		res.push_back(level);
	}
	return res;
	}
};


int main(){

	 TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution solution;

    vector<vector<int>> res= solution.levelOrder(root);

    for (const auto& level : res) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}