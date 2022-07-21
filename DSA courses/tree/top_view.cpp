struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int>v;
        if(root == NULL){
            return v;
        }
        queue<pair<Node*,int>>q;
        q.push({root,0});
        map<int,int>mpp;
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            Node*node=it.first;
            int line=it.second;
            if(mpp.find(line) == mpp.end()){
                mpp[line]=node->data;
            }
            if(node->left)
                q.push({node->left,line-1});
            if(node->right)
                q.push({node->right,line+1});
        }
        for(auto it:mpp){
            v.push_back(it.second);
        }
        return v;
    }
    
    

};
