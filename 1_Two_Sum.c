#include <stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    for (int i = 0; i < numsSize - 1; i++)
        for (int j = i + 1; j < numsSize; j++)
            if ((nums[i] + nums[j]) == target)
            {
                int *result = (int*) malloc(sizeof(int) * 2);
                if (result == NULL)
                {
                    *returnSize = 0;
                    return NULL;
                }
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }

    *returnSize = 0;
    return NULL;
}