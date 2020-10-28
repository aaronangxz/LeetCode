#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string addBinary(string a, string b) 
{
    string out;
    long digitsA = 0, digitsB = 0, sumA = 0, sumB = 0, sumAB = 0;
    unsigned long long bin = 0, remainder = 0;

    //Convert a to binary
    for (int i = a.size() - 1; i >= 0 ; i--)
    {
        if (a[i] == '1')
        {
            sumA += 1 * pow(2,digitsA);
            cout << "sum a is " << sumA << endl;
        }
        digitsA ++;
    }

    //Convert b to binary
    for (int i = b.size() - 1; i >= 0 ; i--)
    {
        if (b[i] == '1')
        {
            sumB += 1 * pow(2,digitsB);
            cout << "sum b is " << sumB << endl;
        }
        digitsB ++;
    }
    
    sumAB = sumA + sumB;    
    
    int digit = 0;

    while (sumAB > 0)
    {
        remainder = sumAB % 2;
        bin += remainder * pow(10,digit);
        sumAB /= 2;
        digit++;
    }

    out = to_string(bin);
    return out;
}


int main(void)
{
    string a = {"10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101"};
    string b = {"110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011"};
    cout << addBinary(a,b) ;
}
