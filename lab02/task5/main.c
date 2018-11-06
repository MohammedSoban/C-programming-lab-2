#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,x1,x2,y1,y2;
float d;
printf("enter coordinates of a x1:");
scanf("%d",&x1);
printf("enter coordinates of a x2:");
scanf("%d",&x2);
a=x2-x1;
printf("enter coordinates of b y1:");
scanf("%d",&y1);
printf("enter coordinates of b y2:");
scanf("%d",&y2);
b=y2-y1;
d=sqrt((a*a)+(b*b));
printf("the distance is::%.2f",d);

return 0;
}
