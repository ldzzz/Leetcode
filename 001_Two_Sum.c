/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) 
{
    int *ret = malloc(sizeof(int)*2);
    for(int i = 0; i < numsSize-1; i++)
        for(int j = i+1; j < numsSize; j++)
            if(nums[i] + nums[j] == target){*ret = i; *(ret+1) = j; break;}
    
    return ret;
}
