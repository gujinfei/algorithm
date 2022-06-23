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

void testQuickSort()
{
    int dst[10] = {12,4,5,3,6,4,7,1,2,100};
    quicksort(dst, 0 , 9); 
    for(auto i : dst){
        cout << i << " "; 
    }
    cout << endl;
}

int main()
{
    //testCoinChange();	 
    testQuickSort();
    cout << "test over!!" << endl;
	return 0;
}