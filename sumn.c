#include<stdio.h>
int main()
{
  int n, a[100],i, sum = 0;
  
  printf("Please Enter any Integer Value\n");
  scanf("%d", &n);
  printf("Enter the %d elements",n);
  
  for(i=0; i<n; i++)
  {
     scanf("%d",&a[i]);
     sum=sum+a[i];
  }
  printf("%d", sum);
  return 0;
}
