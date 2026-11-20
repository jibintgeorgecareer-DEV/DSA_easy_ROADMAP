#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sum(vector<int> nums)
{
    int limit = nums.size();
    int sum = 0;
    vector<int> running_sum;

    for(int i = 0; i < limit; ++i)
    {
        sum = sum + nums[i];
        running_sum.push_back(sum);
    }

return running_sum;
}

int main()
{
    vector<int> nums = {1,2,3,4};

    vector<int> res = sum(nums);

    for(auto i : res)
    {
        cout << i << " " << endl;
    }
    
return 0;
}
