/*
 * @lc app=leetcode.cn id=763 lang=cpp
 *
 * [763] 划分字母区间
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    static bool cmp(vector<int> a, vector<int> b)
    {
        return (a[0] < b[0]);
    }
    vector<int> partitionLabels(string S)
    {
        vector<int> result;
        vector<vector<int>> words(26, vector<int>(2, -1)); //存储每个字符开始和结束位置
        for (size_t i = 0; i < S.size(); ++i)              //建立开始字符与结束字符表
        {
            if (words[S[i] - 97][0] == -1)
            {
                words[S[i] - 97][0] = i;
                words[S[i] - 97][1] = i;//处理某个字符单次出现的情况
            }
            else
            {
                words[S[i] - 97][1] = i;
            }
        }
        sort(words.begin(),words.end(),cmp);//排序
        int i = 0;
        while (i < 26 && words[i][0] == -1) //跳过-1（无意义区域）
            ++i;
        vector<vector<int>> ans;
        ans.push_back(words[i]);
        int j = 0; //结果指针，指向结果的尾元素
        for (i++; i < 26; ++i)
        {
            if (words[i][0] > ans[j][1]) //无法合并
            {
                ans.push_back(words[i]);
                ++j;
            }
            else //合并
            {
                if (words[i][1] > ans[j][1]) //判断哪个尾元素更大
                {
                    ans[j][1] = words[i][1];
                }
            }
        }
        for(const auto &k:ans)
        {
            result.push_back(k[1] - k[0] + 1);
        }
        return result;
    }
};
// @lc code=end
