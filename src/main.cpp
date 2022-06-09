#include <string.h>
#include <iostream>
#include <vector>
#include "common_func.h"

using namespace std;

int main()
{
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result = twoSum(nums, target);

    for (auto i : result)
    {
        cout << i << " ";
    }
    	     
    cout << endl;
	return 0;
}