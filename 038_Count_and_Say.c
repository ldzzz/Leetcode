char* countAndSay(int n) {
  char *s1 = (char *) calloc (2, sizeof (char));
  s1[0] = '1';
  s1[1] = '\0';
  char *s = s1;
  int len = 1;
  for (int i = 1; i < n; i++)
  {
    int j = 0;
    int k = 0;
    int count = 1;
    char * ptemp = s;
    char * sn = (char *) calloc (len*2 + 1, sizeof (char));
    char temp = *s;
    while (*s)
    {
      if (*++s == temp)
        count++;
      else
      {
        sn[k++] = count % 10 + '0';
        sn[k++] = temp;
        temp = *s;
        count = 1;
      }
     }
     sn[k] = '\0';
     len = strlen (sn);
     s = sn;
     free (ptemp);
  }
  return s;
}
