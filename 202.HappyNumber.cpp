#include <iostream>
#include <math.h>
using namespace std;

bool isHappy(int n) 
{
    int sum = 0, count = 0, outer_cycle = 0;

    if (n <= 0) return false;

    while (sum != 1)
    {
        sum = 0;
        while (n > 0)
        {
            sum += pow((n % 10),2); 
            n /= 10;
            cout << "Sum is " << sum << endl;
        }
        n = sum;
        outer_cycle++;

        //Exit loop if infinite
        if (outer_cycle > 10 ) return false;
    }
    
    return true;
}

int main(void)
{
    int n = 19;
    if(isHappy(n)== 1) cout<< "True";
    else cout << "False ";    
}