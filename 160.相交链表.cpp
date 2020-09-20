/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int sizeA = 0, sizeB = 0;
        auto curA = headA,curB=headB;
        while(curA)
        {
            ++sizeA;
            curA = curA->next;
        }
        while (curB)
        {
            ++sizeB;
            curB = curB->next;
        }
        int diff = sizeA - sizeB;
        if(diff<0)
            {
                swap(headA, headB);
                diff = -diff;
            }
        while(diff>0)
        {
            headA = headA->next;
            diff--;
        }
        while(headA!=headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};
// @lc code=end
