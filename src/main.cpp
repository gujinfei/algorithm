#include <string.h>
#include <iostream>
#include <vector>
#include "common_func.h"

using namespace std;

int main()
{
#if 1
    vector<int> nums = {3,2,4};
    int target = 8;
    int result = coinChange(nums, target);
    cout <<"At least need:" << result << endl;
#else
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result = twoSum(nums, target);

    for (auto i : result)
    {
        cout << i << " ";
    }
#endif
    	     
    cout << endl;
	return 0;
}