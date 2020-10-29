#include <iostream>
#include <vector>

using namespace std;

int rob(vector<int>& nums) 
{
    int sum = 0, sumOdd = 0, sumEven = 0;
    
    //Calculate Even
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0 && nums.size() <= 2)
        {
           sumEven += nums[i];
        }
        else if (i % 2 == 0)
        {
            sumEven += nums[i];
        }
        else
        {
            sumOdd += nums[i];
        }
        
    }

    if (sumEven > sumOdd)
    {
        sum = sumEven;
    }
    else
    {
        sum = sumOdd;
    } 

    return sum;
}

int main(void)
{
    vector<int> input = {1,2,3,4,5,6,7,8,9,10};
    cout << rob(input);
    
}

//How about when its not consecutive