// �ǲ߭p�ebinary tree�Ĥ@�D
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) //�פ����
            return 0;
        int ans1=maxDepth(root->left);
        int ans2=maxDepth(root->right);
        return 1+max(ans1,ans2);
    }
};
