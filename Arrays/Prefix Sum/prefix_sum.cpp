#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// This code calculates a running total (prefix sum) of an array.
// It works by accumulating values from left to right:
// 1. vector<int> prefix = nums; copies the original numbers to start.
// 2. for(int i = 1; i < limit; ++i) loops through the array starting from the second number.
// 3. prefix[i] = prefix[i] + prefix[i - 1]; replaces the current number with the sum of itself 
// and the running total before it.

vector<int> prefix_sum(vector<int> nums)
{
    int limit = nums.size();
    vector<int> prefix = nums;

    for(int i = 1; i < limit; ++i)
    {
        prefix[i] = prefix[i] + prefix[i - 1];
    }

return prefix;
}

int main()
{
    vector<int> array = {1,2,3,4};
    vector<int> res = prefix_sum(array);

    for(auto i : res)
    {
        cout << i << " ";
    }

return 0;
}