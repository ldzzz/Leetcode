int strStr(char* haystack, char* needle) 
{
  int i = 0, len = strlen(needle);
  while(*haystack)
  {
    if(!strncmp(haystack, needle, len))
      return i;
    ++i;  haystack++;
  }
  return (!strcmp(haystack, needle))?(0):(-1);
}
