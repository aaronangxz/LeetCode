class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> out;
        for (int i=0; i < nums.size();i++)
        {
            out.push_back(nums[i]);
        }
        for (int i=0; i < nums.size();i++)
        {
            out.push_back(nums[i]);
        }
        return out;
    }
    
};