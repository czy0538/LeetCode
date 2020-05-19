/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        long long out;
        stringstream ss;
        ss << x;
        string num;
        ss >> num;
        if (x == 0)
            return 0;
        for (int i = num.size() - 1; i >= 0; --i)
        {
            if (num[i] == '0')
            {
                num.erase(i);
            }
            else
            {
                break;
            }
        }
        std::reverse(num.begin(), num.end());
        ss.clear();
        ss << num;
        ss >> out;
        if (out > 2147483647)
            return 0;

        if (x < 0)
        {
            out *= -1;
        }
        return out;
    }
};
// @lc code=end
