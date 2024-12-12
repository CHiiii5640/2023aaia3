// 學習計畫binary tree第一題
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr)
            return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};
