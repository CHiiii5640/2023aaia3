//binary tree�ĤT�D
class Solution {
public:
    void helper(TreeNode* root,vector<int>& ans) // &����
    {
        if(root==nullptr)
            return;
        helper(root->left,ans); //���b��
        ans.push_back(root->val);//����
        helper(root->right,ans);//�k�b��
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};
