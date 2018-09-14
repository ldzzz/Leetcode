void merge(int* nums1, int m, int* nums2, int n) 
{
  int k = m+n-1;
  for(int i = k; i > -1; i--)
  {
    if(m > 0 && nums1[m-1] >= nums2[n-1])
      nums1[i] = nums1[--m];
    else if(n > 0)
      nums1[i] = nums2[--n];
  }
  return nums1;
}
