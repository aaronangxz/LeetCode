class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        //get index of key
        vector<int> keyIdx;
        vector<int> idx;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == key) keyIdx.push_back(i);
        }
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < keyIdx.size(); j++){
                if(abs(i - keyIdx[j]) <= k){
                    idx.push_back(i);
                    break;
                } 
        }
    }
        return idx;
    }
};