#include <stdio.h>

int main(void) {
  int n,i,factor=0;
  printf("Enter a positive integer:\n");
  scanf("%d",&n);
  for (i=1;i*i<=n;i++)
  {
    if (n%i==0)
    {
      factor++;
    }
  }
  if (n!=1 && factor==1)
  {
    printf("%d is a prime number",n);
  }
  else
  {
    printf("%d is NOT a prime number",n);
  }
  return 0;
}