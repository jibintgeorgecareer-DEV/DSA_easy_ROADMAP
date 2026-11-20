// You are given an integer array height of length n. 
// There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) 
// and (i, height[i]).
// Find two lines that together with the x-axis form a container, 
// such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Leetcode - 11

#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int water_twoPointer(vector<int> &heights)
{
    int i = 0; // left pointer
    int j = heights.size() - 1; // right pointer
    int max_amt = 0;

    while(i < j)
    {
        int width = j - i;  // The distance between two pointers | Base lenght of the container

        // We need the smallest height of the container | otherwise water will overflow one side
        int current_height = min(heights[i], heights[j]);  

        // calculating AREA
        int area = width * current_height;

        // Setting biggest area of container!
        if(area > max_amt)
        {
            max_amt = area;
        }

        if(heights[i] < heights[j])
        {
            i++;
        }
        else
        {
            --j;
        }
    }
return max_amt;
}

int main()
{
    vector<int> Test = {1,8,6,2,5,4,8,3,7};
    cout << "Answer: " << water_twoPointer(Test);

return 0;
}