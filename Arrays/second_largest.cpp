#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int second_largest(vector<int> nums)
{
    int largest = nums[0];
    int second = nums[1];

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] > largest)
        {
            second = largest;
            largest = nums[i];
        }
        else if(nums[i] > second && nums[i] != largest)
        {
            second = nums[i];
        }
    }

return second;
}

int second_largest_STL(vector<int> nums)
{
    int size = nums.size();
    sort(nums.begin(),nums.end());
    return nums[size-2];
}

int main()
{
    vector<int> array = {3,5,4,1,2,5,8,99};

    cout << "Result : " << second_largest(array);

return 0;
}