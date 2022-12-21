/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> output;
        if(root==NULL){
            return {};
        }
        TreeNode *temp = new TreeNode();
        queue<TreeNode*> q;
        q.push(root);
        int len;
        while(!q.empty()){
            len = q.size();
            vector<int> temp1;
            for(int i = 0;i<len;i++){
                temp = q.front();
                q.pop();
                temp1.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            output.push_back(temp1);
        }
        return output;
    }
};
