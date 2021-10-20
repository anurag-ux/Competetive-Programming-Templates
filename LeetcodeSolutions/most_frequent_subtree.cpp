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
    map<int,int> mp;
    void updateTree(TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }
        updateTree(root->left);
        updateTree(root->right);
        root->val+=((root->left!=nullptr)?root->left->val:0);
        root->val+=((root->right!=nullptr)?root->right->val:0);
        mp[root->val]++;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        updateTree(root);
        int maxi=INT_MIN;
        for(auto x:mp)
        {
            maxi=max(maxi,x.second);
        }
        vector<int> v;
        for(auto x:mp)
        {
            if(x.second==maxi)
            {
                v.push_back(x.first);
            }
        }
        return v;
    }
};