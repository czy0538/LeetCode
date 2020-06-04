/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head)
        {
            return head;
        }
        ListNode *p = head, *t = p->next;

        while (p && t)
        {
            if (p->val != t->val)
            {
                p->next = t;
                p = t;
            }
            t = t->next;
        }
        //如果p->next不是空指针，说明后面的元素都重复了
        p->next=nullptr;
        return head;
    }
};
// @lc code=end
