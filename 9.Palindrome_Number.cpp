#include <iostream>
#include <math.h>

using namespace std;

bool isPalindrome(int x)
{
    int input = x;
    int x_length = x;
    int reverse = 0 , len = 0;
    
    //Find length
    for (int i = 0; x_length != 0; i++)
    {
        x_length /= 10;
        len += 1;
        cout << "Length is " << len << endl;
    }

    for ( int i = 0; x > 0; i ++)
    {
        int digit = x % 10;
        x /= 10;
        reverse += digit * pow(10,len - i - 1);
        cout << "Reverse is " << reverse << endl;
    }

    if (reverse == input)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main (void)
{
    int testcase = isPalindrome(0);
    if (testcase == 0)
    {
        std::cout << "False";
    }
    else
    {
        std::cout << "True";
    }
}