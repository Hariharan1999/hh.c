#include<stdio.h>
int main()
{
  int n, i, sum = 0;
  
  printf("Please Enter any Integer Value\n");
  scanf("%d", &n);
  
  for(i=1; i<=n; i++)
  {
     sum = sum + i;
  }
  
  printf("Sum of Natural Numbers = %d", sum);
  return 0;
}
