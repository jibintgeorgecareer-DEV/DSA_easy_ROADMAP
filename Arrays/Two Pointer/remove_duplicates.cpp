#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> remove_duplicates(vector<int> &nums) // Time - O(n*n)
{
    int limit = nums.size();
    vector<int> result;     // Copy all unique elements into result

    for(int i = 0; i < limit; ++i)
    {
        bool is_dupli = false;   // If value is in 'result' MAKE IT true

        for(int j = 0; j < result.size(); ++j)
        {
            if(nums[i] == nums[j])  // If duplicate is find
            {
                is_dupli = true;
                break;
            }
        }

        if(!is_dupli)
        {
            result.push_back(nums[i]); // Push all uniques into 'result'
        }
    }
return result;
}

int remove_duplicates_inPlace(vector<int> nums)
{
    // Removing without an additional array
    int limit = nums.size();
    int k = 0;

    for(int i = 0; i < limit; ++i)
    {
        bool is_dupli = false;

        for(int j = 0; j < k; ++j)
        {
            if(nums[i] == nums[j])
            {
                is_dupli = true;
                break;
            }
        }

        if(!is_dupli)
        {
            nums[k] = nums[i];
            k++;
        }
    }

return k;
}


int main()
{
    vector<int> arr = {1,2,2,3,4,1};

    // vector<int> res = remove_duplicates(arr);
    // for(auto i : res)
    // {
    //     cout << i << " ";
    // }

    cout << "Number of uniques: " << remove_duplicates_inPlace(arr); 


return 0;
}