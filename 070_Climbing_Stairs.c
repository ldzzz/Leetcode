int climbStairs(int n) 
{
  if(!n)
    return 0;
  if(n == 1)
    return 1;
  if(n == 2)
    return 2;
  int n0 = 1, n1 = 2, total;
  for(int i = 2; i < n; i++)
  {
    total = n0 + n1;
    n0 = n1; n1 = total;
  }
  return total;
}
