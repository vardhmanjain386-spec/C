#include<stdio.h>
int main()
{
 int n;
 printf("Enter size of array : ");
 scanf("%d",&n);
 int arr[n];

 printf("Enter %d elements : \n",n);
 for(int i=0;i<n;i++)
 scanf("%d",&arr[i]);

 int max =  arr[0];

 for(int i=0;i<n;i++)
 {
    if(arr[i]>max)
    max = arr[i];
 }
 printf("Largest element in the array is : %d",max);
 return 0;
}