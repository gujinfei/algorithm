#include "common_func.h"
#include<unordered_map>

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    unordered_map<int, int> index;
    vector<int> result;
    for (int i = 0; i < n; i++) {
        int other = target - nums[i];
        if(index.find(nums[i]) != index.end() )
        {
            result.push_back(index[nums[i]]);
            result.push_back(i);
            return result;
        }
        index[other] = i;
    }
    result.push_back(-1);
    result.push_back(-1);
    return result;
}

int coinChange(vector<int>& coins, int sum)
{
    if(sum == 0) return 0;
    int ans = INT_MAX;
    for(auto coin:coins)
    {
        if(sum - coin < 0) continue;
        int subProb = coinChange(coins, sum - coin);
        if (subProb == -1)
        {
            continue;
        }
        ans = min(ans, subProb + 1);
    }
    return ans == INT_MAX ? -1 : ans;
}