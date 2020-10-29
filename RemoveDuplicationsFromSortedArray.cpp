#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) 
{
    if (nums.size() == 0)
    {
        return 0;
    }
    
    for (int i = 0; i < nums.size() - 1; i++)
    {
        //When current index and next index is the same
        if (nums[i] == nums[i + 1])
        {
            //Remove current index
            nums.erase(nums.begin() + i);
            //Go back one index to check again
            i--;
        }
    }
    return nums.size();
}

int main(void)
{
    vector<int> input = {};
    cout << removeDuplicates(input) << endl;
    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i];
    }
}