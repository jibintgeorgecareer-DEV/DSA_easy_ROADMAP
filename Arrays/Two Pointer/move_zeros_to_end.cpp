#include <iostream>
#include <vector>
using namespace std;

// Given an integer array nums, move all 0's to the end of it 
// while maintaining the relative order of the non-zero elements.

vector<int> move_zero(vector<int> nums) // Time - O(n) | Space - O(1)
{

    int limit = nums.size();
    int i = 0;

    for(int j = 0; j < limit; ++j)  // j is to traverse the NON-ZERO
    {
        if(nums[j] != 0) // If j IS NOT ZERO, swap(i & j)
        {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            i++;
        }    
    }
return nums;
}

int main()
{
    vector<int> test1 = {1,3,0,2,4};
    vector<int> test2 = {1,3,0,0,4};
    vector<int> test3 = {0,1,0,3,12};

    vector<int> result = move_zero(test3);
    for(auto i : result)
    {
        cout << i << " ";
    }
return 0;
}