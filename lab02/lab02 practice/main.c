#include <stdio.h>
#include <conio.h>

int main()
{
   int x1,x2,y1,y2,x,y,;
   float d;
  x1=y1=2;
  x2=y2=1;
  y=y2-y1;
  x=x2-x1;

   d=sqrt ((x*x)+(y*y));
   printf("the distance is : %.2f",d);
   return 0;
}
