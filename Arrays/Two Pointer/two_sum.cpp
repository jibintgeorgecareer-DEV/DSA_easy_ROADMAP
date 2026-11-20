#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <unordered_map>
using namespace std;

vector<int> two_sum(vector<int> arr, int target)
{
    for(int i = 0; i < arr.size(); ++i)
    {
        for(int j = 1; j < arr.size(); ++j)
        {
            if(arr[i] + arr[j] == target)
            {
                cout << "Found Targets:" << endl;
                return {i,j};
            }
        }
    }
return {};
}

vector<int> two_sum_hash_table(vector<int> arr, int target)
{
    unordered_map<int, int> seen;

    for(int i = 0; i < arr.size(); ++i)
    {
        int compliment = target - arr[i]; // we get the num need to add with nums[i]

        if(seen.count(compliment)) // If that nums already seen or have it
        {
            return {seen[compliment], i};   // return it
        }

        seen[arr[i]] = i; // Otherwise store it
    }
return {};
}

vector<int> two_sum_sorted_array(vector<int> arr, int target) // Two Pointer on sorted
{
    int i = 0;
    int j = arr.size() - 1;

    while(i < j)
    {
        int sum = arr[i] + arr[j];

        if(sum == target)
        {
            cout << "Targets Found!" << endl;
            return {i - 1, j - 1};
        }
        else if(sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
return {};
}

int main()
{
    vector<int> array = {1,2,3,4,5};
    int target = 7;

    auto result = two_sum_hash_table(array, target);
    cout << "Index Are: " << result[0] << " and " << result[1];

return 0;
}