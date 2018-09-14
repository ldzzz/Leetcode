int searchInsert(int* nums, int numsSize, int target) 
{
  int pos = 0;
  for(int i = 0; i < numsSize; i++)
  {
    if(nums[i] == target)
      return i;
    else if(target > nums[i])
      pos = i+1;
  }
  return pos;
}
