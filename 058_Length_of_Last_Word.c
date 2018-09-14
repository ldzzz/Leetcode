int lengthOfLastWord(char* s) 
{
  int len = 0;
  char *str = strtok(s, " ");
  while(str != NULL)
  {
    len = strlen(str);
    str = strtok(NULL, " ");
  }
  return len;
}
