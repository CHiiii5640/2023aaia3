// 學習計畫binary tree第一題
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) //終止條件
            return 0;
        int ans1=maxDepth(root->left);
        int ans2=maxDepth(root->right);
        return 1+max(ans1,ans2);
    }
};
