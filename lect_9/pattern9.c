#include<stdio.h>
int main()
{
 for(int i=122;i>=97;i--)
 {
  for(int j=122;j>=i;j--)
  printf("%c ",j);
  printf("\n");
 }
 return 0;
}