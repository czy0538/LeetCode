/*
 * @lc app=leetcode.cn id=179 lang=cpp
 *
 * [179] 最大数
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        vector<string> snums;
        for (const auto &i : nums)
        {
            snums.push_back(int2string(i));
        }
        sort(snums.begin(), snums.end(), cmp);
        string ans;
        for (const auto &i : snums)
        {
            ans += i;
        }
        if (ans[0] == '0')
            return string("0");
        return ans;
    }
    string int2string(int num)
    {
        stringstream ss;
        ss << num;
        string temp;
        ss >> temp;
        return temp;
    }
    static bool cmp(const string &i, const string &j)
    {

        // int k = 0;
        // for (; k < min(i.size(), j.size()); k++)
        // {
        //     if (i[k] > j[k])
        //         return true; //降序
        //     else if (i[k] < j[k])
        //         return false;
        // }
        // if ((i.size() > j.size() && i[k] > j[k - 1]) || (i.size() < j.size() && i[k - 1] > j[k]))
        // {
        //     return true; //降序
        // }
        // return false;

        //offical
        string a = i + j;
        string b = j + i;
        if (a > b)
            return true;
        else
            return false;
    }
};
// @lc code=end
