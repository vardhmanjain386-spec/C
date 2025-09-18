#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5] = {1,4,-2,-4,-2};
  //  int max = INT_MIN;
   
   /* for(int i=0;i<5;i++)
    {
     int sum = 0;
    for(int j=i;j<5;j++)
    {
      sum = sum + a[j];
      if(sum>max)
      max=sum;
    }
    }
    printf("%d",max); */

    int max = INT_MIN;
    int sum = 0;
    for(int i=0;i<5;i++)
    {
      sum=sum+a[i]  ;
      if(sum<0)
      sum=0;
      else if(sum>max)
      max=sum;
    }
    printf("%d",max); 


    
}