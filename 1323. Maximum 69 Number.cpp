class Solution {
public:
    int maximum69Number (int num) 
    {
        int length = 0;
        vector<int> newarr;
        int change = 0;
        int count = 1;
        int newint = 0;
        
        int num1 = num;
        int num2;
        
        while(num1 > 0)
        {
            num1 /= 10;
            length++;
        }
        
        int length1 = length;
        
        while(length1 > 0)
        {
            num2 = num;
            num2 /= pow(10,length1 - 1) ;
            num2 = num2 % 10;
            if(num2 == 6 && change == 0)
            {
                change ++;
                newarr.push_back(9);
            }
            else
            {
                newarr.push_back(num2);
            }
            length1 --;
        }
        
        for(int i = 0; length >0; i++)
        {
            newint += (newarr[i] * pow(10,length-1 ));
            length--;
        }
    return newint;
    }
};