#include <algorithm>
#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

int maxDepth(TreeNode *root) {
    if (root == nullptr)
        return 0;
    if (root->left == nullptr && root->right == nullptr)
        return 1;

    return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
}

int main(void) {}
