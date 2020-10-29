#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    for (int i = nums2.size() - 1; i > 0 ; i++)
    {
        for (int j = nums1.size() - 1; i > 0; j++)
        {
            if (nums2[i] > nums1[j])
            {
                nums1.push_back(nums2[i]);
                j--;
            }
            else if (nums2[i] == nums1[j])
            {
                nums1.push_back(nums2[i]);
            }
            
        }
        
    }
    
    
}

int main(void)
{
    vector<int> in1 = {1,2,3};
    vector<int> in2 = {2,5,6};
    int m = 3, n = 3;

    merge(in1,m,in2,n);

    for (int i = 0; i < in1.size(); i++)
    {
        cout << in1[i];
    }
    
}