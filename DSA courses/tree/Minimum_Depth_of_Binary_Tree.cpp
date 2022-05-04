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
    int minDepth(TreeNode* root) {
        // if(root==NULL){
        //     return 0;
        // }
        // queue<TreeNode*>q;
        // q.push(root);
        // int d1=0,d2=0;
        // while(!q.empty()){
        //     int n=q.size();
        //     for(int i=0;i<n;i++){
        //         TreeNode* node=q.front();
        //         q.pop();
        //         if(node->left){
        //             q.push(node->left);d1++;
        //         }
        //         if(node->right){
        //             q.push(node->right);d2++;
        //         }
        //     }
        //     // d++;
        // }
        // return 1+min(d1,d2);
        if(root){
            int le=1e6,r=1e6;
            if(!root->left && !root->right)return 1;
           
            if(root->left) le=minDepth(root->left)+1;
            if(root->right) r=minDepth(root->right)+1;
            return min(le,r);
        }
        return 0;
    }
};