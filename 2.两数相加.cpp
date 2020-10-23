/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = new ListNode(-1); //头结点
        ListNode *p = ans;
        int up = 0;
        while (l1 && l2)
        {
            int sum = l1->val + l2->val + up;
            up = sum / 10;
            sum %= 10;
            p->next = new ListNode(sum);
            p = p->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1)
        {
            int sum = l1->val + up;
            up = sum / 10;
            sum %= 10;
            p->next = new ListNode(sum);
            p = p->next;
            l1 = l1->next;
        }
        while (l2)
        {
            int sum = l2->val + up;
            up = sum / 10;
            sum %= 10;
            p->next = new ListNode(sum);
            p = p->next;
            l2 = l2->next;
        }
        if (up)
        {
            p->next = new ListNode(up);
        }
        ans = ans->next;
        return ans;
    }
};
// @lc code=end
