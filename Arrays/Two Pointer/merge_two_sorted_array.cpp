#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Leetcode - 88

// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and 
// two integers m and n, 
// representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

vector<int> merge(vector<int> nums1, int m, vector<int> nums2) 
{
    int n = nums2.size();  // size of nums2
    int k = m + n - 1;     // We set elemets from back to font of nums1

    int i = m - 1, j = n - 1;  // Set two pointers at end of the array

    while(j >= 0)  // We merge the array from backwards...
    {
        if(i >= 0 && nums1[i] > nums2[j]) // Pick larges elements from back of nums1 & nums2
        {                                // and place end of nums1.
            nums1[k] = nums1[i];
            --i;                                    // We place the pointers at end of both arrays
        }                                          // and target empty space of nums1
        else                                       
        {
            nums1[k] = nums2[j];
            --j;
        }
    --k;
    }
return nums1;
}

vector<int> merge_brute(vector<int> nums1, vector<int> nums2) // brute force
{
    int m = nums1.size();
    int n = nums2.size();
    int j = 0;

    for(int i = 0; i < m; ++i)
    {
        nums1.push_back(nums2[j]);
        j++;
    }
    sort(nums1.begin(), nums1.end());

return nums1;
}

int main()
{
    vector<int> Test1_a = {1,2,3};
    int m = 3;                      // The limit of actual values in a (1,2,3)
    vector<int> Test2_b = {2,5,6};

    // vector<int> res = merge(Test1_a, m, Test2_b);
    // for(auto i : res)
    // {
    //     cout << i << " ";
    // }

    vector<int> r = merge_brute(Test1_a,Test2_b);
    for(auto i : r)
    {
        cout << i << " ";
    }


return 0;
}