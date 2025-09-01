#include <stdio.h>

int main() 
{
    int n,a,b;
    printf ("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    printf("Enter your choice : \n 1 for addition \n 2for substraction \n 3for multiplication 
            \n 4for division");
    scanf("%d",&n);
    switch(n)
    {
     case 1 : printf("%d",a+b);
              break;
     case 2 : printf("%d",a-b);
              break;
     case 3 : printf("%d",a*b);
              break;
     case 4 : printf("%d",a/b);
              break;
     default : printf("Enter valid choice");
    }

    return 0;
}
