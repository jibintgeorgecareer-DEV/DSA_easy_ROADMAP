// Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int kadane(vector<int> nums)
{
    int limit = nums.size();
    int current_sum = nums[0];
    int sum = nums[0];

    for(int i = 1; i < limit; ++i)
    {
        current_sum = max(nums[i], current_sum + nums[i]);

        sum = max(sum, current_sum);
    }

return sum;
}

int main()
{
    vector<int> array = {5,4,-1,7,8};

    cout << kadane(array);

return 0;
}