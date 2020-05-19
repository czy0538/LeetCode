#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int cmp(const pair<string, int> &x, const pair<string, int> &y)
    {
        return x.second > y.second;
    }

    void sortMapByValue(map<string, int> &tMap, vector<pair<string, int>> &tVector)
    {
        for (map<string, int>::iterator curr = tMap.begin(); curr != tMap.end(); curr++)
            tVector.push_back(make_pair(curr->first, curr->second));

        sort(tVector.begin(), tVector.end(), cmp);
    }
    
    int rob(vector<int> &nums)
    {
        map<int, int> mon;
        for (int i = 0; i < nums.size(); ++i)
        {
            pair<int, int> temp;
            temp.first = i;
            temp.second = nums[i];
            mon.insert(temp);
        }
    }
};