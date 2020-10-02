/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. 
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
/*
/*
My Solution:
   - Will not work with overflown integer e.g. -214748364

int reverse(int x)
{
    long new_x = x;
    int rev = 0;
    int size = floor(log10(abs(new_x))) + 1;
    
   if (size == 1)
        rev = x;
    else
    {    
        for (int i = 0; i < size; i++)
        {
            rev += (new_x % 10) * pow(10,size -1 - i);
            new_x /= 10;
            
            if (rev > 2147483647 || rev < -2147483648)
            {
                rev = 0;
                break;
            }
        }
    }
        return rev;
*/

// Correct Solution
 int reverse(int x) 
 {
    int rev = 0;
    while (x != 0) 
    {
        int pop = x % 10;
        x /= 10;
        if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
        if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
        rev = rev * 10 + pop;
    }
    return rev;
}