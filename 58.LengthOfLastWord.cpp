#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) 
    {
        if (s.size() == 0) return 0;
        
        int i = 0 , j = 0, count = 0, space = 0;
        
        //first index to check
        i = s.size() - 1;
        cout << "i is " << i << endl;

        //Count spaces
        while(s[i] == ' ')
        {
            if(i < 0)
            {
                i = 0;
                break;
            } 
            else
            {
                space++;
                i --;
            }
        }
        cout << "Space is " << space << endl;

        if(space == s.size()) return 0;

        // if(i < 0) i = 0;
        //Start from stopped index
        j = i;

        cout << "J is " << j << endl;

        //Count words
        while(s[j] != ' ' && s[j] != '\0')
        {
            count++;
            j--;
            cout << "J count: " << count << endl;
        }
        
        return count;
    }

int main(void)
{
    string a = "        ";
    int test = lengthOfLastWord(a);
    cout << test;
}