/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for(int i=digits.size()-1;i>=0;--i)
        {
            digits[i]=++digits[i]%10;
            if(digits[i]!=0)
            return digits;
        }
        digits.push_back(0);
        digits[0]=1;
        return digits;
        // int p = digits.size() - 1;
        // if (digits[p] != 9)
        // {
        //     digits[p]++;
        // }
        // else
        // {
        //     digits[p] = 0;
        //     for (p = p - 1; p >= 0; --p)
        //     {
        //         if (digits[p] != 9)
        //         {
        //             ++digits[p];
        //             break;
        //         }
        //         else
        //         {
        //             digits[p] = 0;
        //         }
        //     }
        //     if (digits[0] == 0)
        //     {
        //         digits[0] = 1;
        //         digits.push_back(0);
        //     }
        // }
        // return digits;
    }
};
// @lc code=end
