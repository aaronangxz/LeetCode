#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) 
      {
        int i = digits.size() - 1;
        digits[i] ++;
        
        for(int j = digits.size() - 1; j >= 0; j--)
        {
            if(j == 0 && digits[j] == 10)
            {
                digits[j] = 0;
                digits.insert(digits.begin(), 1);
            }
            else if (j != 0 && digits[j] == 10)
            {
                digits[j] = 0;
                digits[j - 1] ++;
            }
        }
        return digits;
    }

int main(void)
{
    vector<int> input = {9,9,9,9};
    vector<int> output = plusOne(input);

    for (int i = 0; i < output.size() ; i++)
    {
        cout << output[i] << " ";
    }
    
}

