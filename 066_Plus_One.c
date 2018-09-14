/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
  *returnSize = digitsSize;
  int next = digitsSize-1;
  while(next >= 0)
  {
    if(digits[next] < 9)
    {
      digits[next]++;
      return digits;
    }
    digits[next] = 0; next--;
  }
  int *ret = malloc(sizeof(int) * digitsSize+1);
  memset(ret, 0, (digitsSize+1)*sizeof(int));
  ret[0] = 1;
  *returnSize += 1;
  return ret;
}
