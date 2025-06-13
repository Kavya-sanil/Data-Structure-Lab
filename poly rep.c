#include<stdio.h>
struct poly
{
int coeff;
int exp;
};
void main()
{ int n,i;
 printf("enter the highest degree of polynomial");
 scanf("%d",&n);
  struct poly x[n];
   for(i=0;i<n;i++)
 {
          printf("enter the coefficient");
scanf("%d",&x[i].coeff);
printf("enter the exponent");
scanf("%d",&x[i].exp);
}
  printf("polynomial is\t");
  for(i=0;i<n;i++)
  {
        printf("%dx^%d",x[i].coeff,x[i].exp);
	if(i<(n-1))
	    printf("+");
		  	
  }
  }
