/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */
#include <bits/stdc++.h>
using namespace std;
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
    struct node
    {
        TreeNode *n;
        int pos;
        node(TreeNode *treeNode, int p) : n(treeNode), pos(p) {}
    };
    queue<node *> q;
    vector<node *> nodes;

    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;
        q.push(new node(root->left, 2));
        q.push(new node(root->left, 2));
        int i = 2;
        while (!q.empty())
        {
            auto t = q.front();
            q.pop();
            if (!t)
                continue;
            else if (i == t->pos)
            {
                nodes.push_back(t->n) if (!(t->n))
                {
                    q.push(nullptr);
                    q.push(nullptr);
                }
                else
                {
                    q.push(new node(t->n->left, i + 1));
                    q.push(t->n->right,i+1));
                }
            }
            else
            {
                if (nodes.size() % 2 != 0)
                    return false;
                for (int j = nodes.size() / 2; j > -1; --j)
                {
                    if(nodes[j])
                }
            }
        }
    }
};

// @lc code=end
//前序遍历法
class Solution
{
public:
    stack<TreeNode *> left;
    stack<TreeNode *> right;

    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;
        left.push(root->left);
        right.push(root->right);
        Left(root->left);
        Right(root->right);
        while (!right.empty() && !left.empty())
        {
            if (left.top() == nullptr && right.top() == nullptr) //都是空
            {
                left.pop();
                right.pop();
            }
            else if (left.top() && right.top()) //都不是空比较值
            {
                if (left.top()->val == right.top()->val)
                {
                    left.pop();
                    right.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        if (right.empty() && left.empty())
            return true;
        else
            return false;
    }
    void Left(TreeNode *root)
    {
        if (!root)
        {
            left.push(nullptr);
            return;
        }
        left.push(root->left);
        if (root->left)
        {
            Left(root->left);
        }
        left.push(root->right);
        if (root->right)
        {
            Left(root->right);
        }
    }
    void Right(TreeNode *root)
    {
        if (!root)
        {
            right.push(nullptr);
            return;
        }
        right.push(root->right);
        if (root->right)
        {
            Right(root->right);
        }
        right.push(root->left);
        if (root->left)
        {
            Right(root->left);
        }
    }
};