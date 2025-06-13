#include<stdio.h>
void main()
{ int n,i=0,j,small,temp,count=0;
printf("enter array element");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{ count++; 
scanf("%d",&a[i]);
} count++;

 for(i=0;i<n;i++)
{ count++; 
small=i;
for(j=i+1;j<n;j++)
{count++; 
if(a[small]>a[j])
{ count++;
small=j;
}count++;
}
if(i!=small)
{ count++;
temp=a[i];
a[i]=a[small];
a[small]=temp;
} count++;
} count++;
printf("sorted array");
for(i=0;i<n;i++)
{ count++;
printf("%d",a[i]);
}
printf("space complexity=%d",24+(4*n));
printf("time complexity=%d",count);
}


