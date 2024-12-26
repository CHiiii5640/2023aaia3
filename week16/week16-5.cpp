//binary tree第三題
class Solution {
public:
    void helper(TreeNode* root,vector<int>& ans) // &指標
    {
        if(root==nullptr)
            return;
        helper(root->left,ans); //左半邊
        ans.push_back(root->val);//中間
        helper(root->right,ans);//右半邊
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};
