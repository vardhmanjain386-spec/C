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

 int min =  arr[0];

 for(int i=0;i<n;i++)
 {
    if(arr[i]<min)
    min = arr[i];
 }
 printf("Smallest element in the array is : %d",min);
 return 0;
}