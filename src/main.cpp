#include <string.h>
#include <iostream>
#include <vector>
#include "common_func.h"

using namespace std;

void testTwoSum()
{
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result = twoSum(nums, target);

    for (auto i : result)
    {
        cout << i << " ";
    }
}

void testCoinChange()
{
    vector<int> nums = {3,2,4};
    int target = 9;
    int result = coinChange(nums, target);
    cout <<"At least need:" << result << endl;
}

int main()
{
    testCoinChange();	     
    cout << endl;
	return 0;
}