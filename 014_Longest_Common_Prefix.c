char* longestCommonPrefix(char** strs, int strsSize) 
{
  if(strsSize == 1)
    return strs[0];
  if(strsSize == 0 || strlen(strs[0]) == 0)
    return "";
  int n = 1;
  while(1)
  {
    int temp = 1; 
    for(int i = 0; i < strsSize-1; i++)
    {
      if(n > strlen(strs[i]) || strncmp(strs[i], strs[i+1], n))
      {
        temp = 0;  break;
      }
    }
    if(!temp)
      break;
    n+=1;
  }
  strs[0][n-1] = 0;
  return  strs[0];
}
