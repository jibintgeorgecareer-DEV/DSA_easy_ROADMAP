#include<iostream>
#include<vector>
using namespace std;

vector<int> largest_smallest(vector<int> nums)
{
    int size = nums.size();
    int largest = nums[1];
    int smallest = nums[2];

    for(int i = 0;i < size; i++)
    {
        if(nums[i] > largest)
        {
            largest = nums[i];
        }

        if(nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }
    return {largest,smallest};
}

int main()
{
    vector<int> array = {2,5,4,1,2,6,7};

    vector<int> result = largest_smallest(array);

    cout << "Largest:" << result[0] << endl;
    cout<< "Smallest:" << result[1] << endl;
return 0;
}