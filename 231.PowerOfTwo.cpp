#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) 
{
    bool is = 0;
    int rem = 0, number = n;

    if (n <= 0) return false;

    while (number >= 2)
    {
        rem += number % 2;
        cout << "rem is " << rem << " when n is " << number << endl;
        number /= 2;
    }
    
    return is = (rem == 0 || n == 1)? true : false; //Ternary operator
}

int main(void)
{
    int n = -16;
    if (isPowerOfTwo(n) == 1)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }   
}