class Solution {
public:
    string toLowerCase(string str) 
    {
        string newstr;
        for(int i = 0; i < str.length(); i++)
        {
            char charac = str[i];
            if(charac >= 65 && charac <= 92) newstr += charac + 32;
            else newstr += charac;
        }
        return newstr;
    }
};