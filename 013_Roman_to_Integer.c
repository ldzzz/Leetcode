int romanToInt(char* s) 
{
  int res = 0;
  while(*s)
  {
    switch(*s){
        
      case 'M':
        res += 1000;
        break;
      case 'D':
        res += 500;
        break;
      case 'C':
         (*(s+1) == 'D' || *(s+1) == 'M')?(res-=100):(res+=100);
        break;
      case 'L':
        res += 50;
        break;
      case 'X':
         (*(s+1) == 'L' || *(s+1) == 'C')?(res-=10):(res+=10);
        break;
      case 'V':
        res+=5;
        break;
      case 'I':
        (*(s+1) == 'I' || *(s+1) == 0)?(res++):(res--);
        break;
    }
    s++;
  }
  
  return res;
}
