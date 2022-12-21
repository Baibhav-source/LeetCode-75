/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> output;
     if(!root){
         return{};
     }
        Node* temp = new Node();
        temp = root;
        output.push_back(temp->val);
        for(int i = 0;i<temp->children.size();i++){
            vector<int> temp1 = preorder(temp->children[i]);
            output.insert(output.end(),temp1.begin(),temp1.end());
         }
        return output;

    } 
};
