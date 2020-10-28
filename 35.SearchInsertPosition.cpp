#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int match = 0, nearest = 0;
        int i;
        for( i = 0; i < nums.size(); i++)
        {
            if(target == nums[i])
            {
               match = i;
            }
            if(target > nums[i])
            {
                nearest ++;
            }
        }
        
        if(match == 0)
        {
            match = nearest;    
            
            if (target == 0)
            {
                match = 0;
            }
        }
        
        return match;
    }
};