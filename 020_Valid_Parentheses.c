//mystackfunctions
char stack[10000];
int top = -1;


bool isEmpty()
{
  return (top == -1)?(true):(false);
}

char pop()
{
  char element = 'E';
  if(!isEmpty())
  {
    element = stack[top];
    top-= 1;
  }
  return element;
}
void push(char data)
{
  top += 1;
  stack[top] = data;
}

bool isValid(char* s) 
{
  top = -1;
  while(*s)
  {
    if(*s == '(')
      push(')');
    else if(*s == '[')
      push(']');
    else if(*s == '{')
      push('}');
    else if(isEmpty() || pop() != *s)
      return false;
    s++;
  }
  return (isEmpty())?(true):(false);
}
