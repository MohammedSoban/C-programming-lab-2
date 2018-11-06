#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,x;
    float avg;
    printf("enter the 1 integers:");
    scanf("%d",&a);
     printf("enter the 2 integers:");
     scanf("%d",&b);
      printf("enter the 3 integers:");
      scanf("%d",&c);
       printf("enter the 4 integers:");
       scanf("%d",&d);
        printf("enter the 5 integers:");
        scanf("%d",&e);
        x=a+b+c+d+e;
    printf("the sum is %d:",x);
     avg =x/5;
     printf("the average is %.2f:",avg);

    return 0;
}
