class Solution {
public:
    bool isPalindrome(string s) {
        //remove spaces and symbols
        string newS;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90){
                //caps letters
                newS += s[i] + 32;
            }else if(s[i] >= 48 && s[i] <= 57){
                //nums
                newS += s[i];
            }else if(s[i] >= 97 && s[i] <= 122){
                //small letters
                newS += s[i];
            }
        }

        if(newS.empty() || newS.size() == 1) return true;
        
        int i = 0, j = newS.size()-1;
        while(i < j){
            if(newS[i] != newS[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};