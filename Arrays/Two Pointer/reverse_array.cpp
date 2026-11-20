#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> reverse_inplace(vector<int> &nums)
{
    int limit = nums.size();

    for(int i = 0; i < limit/2; ++i)
    {
        int temp = nums[i];
        nums[i] = nums[limit - 1 - i];
        nums[limit - 1 - i] = temp;
    }

return nums;
}

vector<int> reverse_two_pointer(vector<int> &nums)
{
    int limit = nums.size();
    int left = 0;
    int right = limit - 1;

    while (left < right)
    {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    }
    
return nums;
}

int main()
{
    cout << "Hello..." << endl;
    vector<int> array = {1,3,5,7,9};

    vector<int> res = reverse_two_pointer(array);
    for(auto i : res)
    {
        cout << i << " ";
    }

return 0;
}