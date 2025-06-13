#include<stdio.h>
void main()
{ int a[10],n,i,j,p,temp,first,last,middle,count=0,s;
printf("enter the number of element");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
 { count++;
  scanf("%d",&a[i]);
  }
for(i=0;i<n;i++)
{ count+=2;
for(j=i+1;j<n;j++)
{ count+=2;
   if(a[i]>a[j])
  {  count+=2;
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
   }
   }
 }
 printf("sorted list");
 for(i=0;i<n;i++)
 { count+=2;
 printf("%d",a[i]);
 }
 printf("\n");
 
 printf("element to be searched");
 scanf("%d",&p);
 
 first=0;
 last=n-1;
 
 while(first<=last)
 { count++;
 middle=(first+last)/2;
 if(a[middle]<p)
 {count+=2;
 first=middle+1;
 }
 







if(a[middle]==p)
 {count+=2;
 printf("element is found%d",a[middle-1]);
 break;
 }
 if(a[middle]>p)
 last=middle-1;
 count++;
 }
 s=(4*n)+(4+10);
 printf("\n time complexity:%d\nspace complexity:%d",count,s);
 }

