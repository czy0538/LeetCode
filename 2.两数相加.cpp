/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int up=0;
        auto head=l1;
        while(l1&&l2)
        {
            int temp=l1->value+l2->value+up;
            l1->value=temp%10;
            up=temp/10;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1)
        {
            l1->value=
        }
    }
};
// @lc code=end

