/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */
#include <bits\stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    string countAndSay(int n)
    {
        string num = "1";
        if (n == 1)
        {
            return num;
        }
        for (int i = 0; i < n - 1; ++i)
        {
            string temp = "";

            for (size_t j = 0; j < num.size();)
            {
                int count = 1;
                size_t k = j + 1;
                while (k < num.size() && num[k] == num[j])
                {
                    ++count;
                    ++k;
                }
                temp.push_back(count + '0');
                temp.push_back(num[j]);
                j = k;
            }
            num = temp;
        }
        return num;
    }
};
// @lc code=end
