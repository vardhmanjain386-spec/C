#include<stdio.h>
int main()
{
 for(int i=97;i<123;i++)
 {
  for(int j=97;j<=i;j++)
  printf("%c ",j);
  printf("\n");
 }
 return 0;
}