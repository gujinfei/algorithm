#ifndef _COMMON_FUNC_H_
#define _COMMON_FUNC_H_
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int coinChange(vector<int>& coins, int sum);

int quicksort(int src[], int first, int last);

#endif