int removeDuplicates(int* nums, int numsSize) 
{
  if(!numsSize)
    return numsSize;
  int pos = 1, len = 1; bool once = false;
  for(int i = 1; i < numsSize; i++)
  {
    if(nums[i-1] != nums[i])
    {
      nums[pos] = nums[i]; 
      pos++; ++len;
    }
    else if(!once){pos = i; once = true;}
  }
  return len;
}


