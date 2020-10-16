/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &A)
    {
        int pos;
        for (pos = 0; pos < A.size(); ++pos)
        {
            if (A[pos] >= 0)
                break;
        }
        if (pos == 0)
        {
            for (auto &i : A)
            {
                i = i * i;
            }
            return A;
        }
        else
        {
            vector<int> ans;
            int r = pos, l = pos - 1;
            while (l >= 0 && r < A.size())
            {
                if (abs(A[l]) < A[r])
                {
                    ans.push_back(A[l] * A[l]);
                    l--;
                }
                else
                {
                    ans.push_back(A[r] * A[r]);
                    r++;
                }
            }
            while (l >= 0)
            {
                ans.push_back(A[l] * A[l]);
                l--;
            }
            while(r <A.size())
            {
                ans.push_back(A[r] * A[r]);
                r++;
            }
            return ans;
        }
    }
};
// @lc code=end
