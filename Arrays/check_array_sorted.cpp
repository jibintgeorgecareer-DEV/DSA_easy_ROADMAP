#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check_sorted(vector<int> nums)
{
    int size = nums.size();

    for(int i = 0; i < size - 1; ++i)
    {
        if(nums[i] > nums[i+1])
        {
            return false;
        }
    }

return true;
}

int main()
{
    vector<int> array = {1,2,3,4,5};

    if(check_sorted(array))
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }

return 0;
}