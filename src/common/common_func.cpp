#include "common_func.h"
#include<unordered_map>

int quicksort(int src[], int first, int last)
{
    int key = src[first];
    auto i = first;
    auto j = last;
    int index = -1;

    while(j >= i)
    {
        if(src[j] < key) {
            while (i < j) {
                i++;
                if(src[i] > key)
                {
                    int temp = src[i];
                    src[i] = src[j];
                    src[j] = temp;
                    break;
                } 
            }  
        } 
        if(i == j) {
            src[first] = src[i];
            src[i] = key; 
            index = i;
            break;
        }
        j--; 
    }
 
    if(index-1 > first)   
        quicksort(src, first, index-1);
    if(last > index+1)
        quicksort(src, index+1, last);
    return 0;
}

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

#ifdef OPTIMIIZE
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
#else
int coinSubChange(vector<int>& coins, int sum, vector<int>& result)
{
    if(sum == 0) return 0;
    int ans = INT_MAX;
    for(auto coin:coins)
    {
        if(sum - coin < 0) continue;
        int subProb = 0;
        if(result[sum - coin] != -2)
            subProb = result[sum - coin];
        else
            subProb = coinSubChange(coins, sum - coin, result);
        if (subProb == -1)
        {
            continue;
        }
        ans = min(ans, subProb + 1);
    }
    result[sum] = ans == INT_MAX ? -1 : ans;
    return ans == INT_MAX ? -1 : ans;
}

int coinChange(vector<int>& coins, int sum)
{
    vector<int> result(sum, -2);
    if(sum == 0) return 0;
    int ans = INT_MAX;
    for(auto coin:coins)
    {
        if(sum - coin < 0) continue;
        int subProb = 0;
        if(result[sum - coin] != -2)
            subProb = result[sum - coin];
        else{
            subProb = coinSubChange(coins, sum - coin, result);
        }
           
        if (subProb == -1)
        {
            continue;
        }
        ans = min(ans, subProb + 1);
    }
    return ans == INT_MAX ? -1 : ans;
}

#endif
