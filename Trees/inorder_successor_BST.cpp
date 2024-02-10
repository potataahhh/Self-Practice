class Solution{
public:

	TreeNode* inorderSuccessor(TreeNode* root,TreeNode* k){
		TreeNode* res;

		while(root!=NULL){
			if(k->val >=root->val){
				root = root->right;
			}
			else{
				res= root;
				root=root->left;
			}
		}
		return res;
	}
};