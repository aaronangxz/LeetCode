class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int i = 0;
        
        while(i < s.size() / 2)
        {
            char tmp = s[i];
            s[i] = s[s.size() - (1 + i)];
            s[s.size() - (1 + i)] = tmp;
            i++;
        }
    }
};