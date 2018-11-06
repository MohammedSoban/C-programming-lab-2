#include <stdio.h>
#include <stdlib.h>

int main()
{
 int q,m,f,t;
 float p;
 printf("enter the marks of quiz:");
 scanf("%d",&q);
 printf("enter marks of mid term:");
 scanf("%d",&m);
 printf("enter marks of final term:");
 scanf("%d",&f);
 t=q+m+f;
 printf("the total marks:%d\n",t);
 p=t*100/300;
 printf("the percentage is:%.2f",p);

    return 0;
}
