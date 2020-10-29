#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) 
{
    int match = 0, alpha = 0;
    bool out = 0;
    
    for (int i = 0; i < s.size() ; i++)
    {
        if (isalpha(s[i]))
        {
            alpha ++;
        }
    }
    cout << "Alpha: " << alpha << endl;
    
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = s.size(); j > s.size()/2; j--)
        {
            if (match > alpha/2)
            {
                break;
            }
            
            
            
            if (isalpha(s[i]) && isalpha(s[j]))
            {
                
                if (s[i] == s[j] || s[i] + 32 == s[j] || s[i] == s[j] + 32)
                {
                    match++;
                    cout << "Matched at " << i << ", " << j  << endl;
                    break;
                }
            }
            else
            {
                continue;
            }
            
        }
        
    }
    if (match > 0)
    {
        out = 1;;
    }
    else
    {
        out = 0;;
    }
    
    return match;
}

int main(void)
{
    string in = {"A man, a plan, a canal: Panama"};
    cout << isPalindrome(in);
}