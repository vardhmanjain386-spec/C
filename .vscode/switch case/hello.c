#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    switch(a)
    {
     case 1 : printf("hello");
              break;
     case 2 : printf("Bye Bye");
              break;
     default : printf("Welcome");
    }

    return 0;
}
