#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Given an array nums containing n distinct numbers in the range [0, n], 
//return the only number in the range that is missing from the array.

int missing_number_MATH(vector<int> nums) // TIME: O(N)  SPACE: O(1)
{ 
// It operates on a simple mathematical truth: 
//(Expected Sum of a complete range) - (Actual Sum of the elements present) = The Missing Number.

    int n = nums.size();    

    int expected_sum = n * (n+1) / 2;  // Famouse equation for sum of first n +ve numbers
    long array_sum = 0;

    for(int i = 0; i < n; ++i)
    {
        array_sum = array_sum + nums[i];  // sum of elements in input array
    }

return expected_sum - array_sum; // The missing number 
}

int missing_number_XOR(vector<int> nums)
{
    int n = nums.size();
    int xor_sum = 0;

    for(int i = 0; i <= n; ++i)
    {
        xor_sum = xor_sum ^ i;  // XOR with index values 0 to n
    }

    for(int i = 0; i < n; ++i)
    {
        xor_sum = xor_sum ^ nums[i];  // XOR the value with every array values
    }

return xor_sum;
}

int main()
{
    vector<int> array = {3,0,1};
    cout << missing_number_XOR(array);

return 0;
}