// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place 
// such that each unique element appears only once. The relative order of the elements should be 
// kept the same.
// Leetcode question - 26
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDupli(vector<int> &nums)
{
    if(nums.empty()) { return 0; }

    int limit = nums.size();
        int i = 0;           // To keep on an elements

        for(int j = 1; j < limit; ++j)  // To traverse elements
        {
            if(nums[i] != nums[j])  // If i & j are diff in-place change | if same NO change
            {
                i++;       // Increment then change
                nums[i] = nums[j];
            }
        }     
    return i + 1;
}

int main()
{
    vector<int> arr = {1,1,2};

    cout << "Uniques are: " << removeDupli(arr) << endl;

    for(auto i : arr)
    {
        cout << i << " ";
    }

return 0;
}