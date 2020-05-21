/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        map<char, char> right = {{')', '('}, {'}', '{'}, {']', '['}};
        stack<char> data;
        for (auto i : s)
        {
            auto t = right.find(i);
            if (t == right.end()) //没找到说明是左元素
            {
                data.push(i);
            }
            else
            {
                if (data.empty()) //是右元素但栈中没有可供弹出的左元素
                    return false;
                //如果栈不空且为有元素，弹出个左元素
                char c = data.top();
                data.pop();
                if (c != t->second)//若不是对应的右元素，弹出
                    return false;
            }
        }
        //处理只有左元素情况
        if(!data.empty())
            return false;
        return true;
    }
};
// @lc code=end
