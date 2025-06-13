#include<stdio.h>
void main()
	{int i,n,j,temp,count=0; 
	count++;
	printf("enter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
		for(i=0;i<n;i++)
		{count++;
		scanf("%d",&a[i]);
		count++;
		}count++;
			for(i=0;i<n-1;i++)
				{count++;
				for(j=0;j<n-i-1;j++)
				  {count++;
				  if(a[j]>a[j+1])
				     {count++;
				     temp=a[j];
				     a[j]=a[j+1];
				     a[j+1]=temp;
				     }
				   }count++;
				  
				 }count++;
		printf("after sorting:\t");
			for(i=0;i<n;i++)
			{count++;
			printf("%d",a[i]);
			count++;
			}count++;
			printf("\nSpace complexity=%d",20+(4*n));
			printf("\nTime complexity=%d",count);
			}

