
  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        height(root,h);
        return d;
    }
    int height(TreeNode*root,int &d){
        if(root == NULL){
            return 0;
        }
        int l=height(root->left);
        int r=heght(root->right);
        d=max(d,l+r);
        return 1+ max(l,r);
    }
};