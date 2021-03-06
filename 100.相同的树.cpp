/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        //一个为空一个不为空
        if ((p && !q) || (!p&&q))
        {
            return false;
        }
        //都为空
        if (!p && !q)
        {
            return true;
        }
        //都不为空
        if (p->val != q->val)
        {
            return false;
        }
        return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};
// @lc code=end
