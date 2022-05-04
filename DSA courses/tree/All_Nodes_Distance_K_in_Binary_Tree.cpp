/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void findparent(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent, TreeNode* target){
        // map<TreeNode*,TreeNode*>parent;
        // parent[root]=NULL;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            if(node->left){
                parent[node->left]=node;
                q.push(node->left);
            }
            if(node->right){
                parent[node->right]=node;
                q.push(node->right);
            }
        }
        //return parent;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        findparent(root,parent,target);
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;
        int res = 0;
            while(!q.empty()) {
            int size = q.size();
            if(res == k) break;
                res++;
            
            for(int i = 0; i < size; i++) {
                TreeNode* currNode = q.front();
                q.pop();
                
                if(currNode->left && !visited[currNode->left]) {
                    q.push(currNode->left);
                    visited[currNode->left] = true;
                }
                if(currNode->right && !visited[currNode->right]) {
                    q.push(currNode->right);
                    visited[currNode->right] = true;
                }
                if(parent[currNode] && !visited[parent[currNode]]) {
                    q.push(parent[currNode]);
                    visited[parent[currNode]] = true;
                }
            } 
        }
        
        vector<int> ans;
        while(!q.empty()) {
            ans.push_back(q.front()->val);
            q.pop();
        }
        
        return ans;
        
    }
};