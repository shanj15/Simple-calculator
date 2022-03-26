#include <stdio.h>

int main()
{
  int num1,num2;
  char op;
  float result;

  printf("Enter two integers: ");
  scanf("%d%d",&num1,&num2);

  printf("Enter the operator\n");
  printf("+ for addition\n");
  printf("- for subtraction\n");
  printf("* for multiplication\n");
  printf("/ for division\n");
  printf("%% for modulus\n");

  scanf(" %c",&op);

  if(op=='+')
  {
    result=num1+num2;
  }
  else if(op=='-')
  {
    result = num1-num2;
  }
  else if(op=='*')
  {
    result=num1*num2;
  }
  else if(op=='/')
  {
    if(num2==0)
    {
      printf("Enter a non zero value\n");
      return(-1);
    }
    else
    {
      result = num1/num2;
    }
  }
  else if(op=='%')
  {
    if(num2==0)
    {
      printf("Enter a non zero value\n");
      return (-1);
    }
    else
    {
      result=num1%num2;
    }
  }
  else
  {
    printf("Invalid operator\n");
    return 1;
  }
  printf("Result=%f\n",result);
  return 0;
}