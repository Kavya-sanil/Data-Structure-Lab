#include<stdio.h>
void main()
{int n,m,i,size,k,j;
printf("enter he number of rows");
scanf("%d",&n);
printf("enter the number of coloumns");
scanf("%d",&m);
int a[n][m],b[n][m];
printf("enter the elements");
for(i=0;i<n;i++)
	{ 	
                for(j=0;j<m;j++)
		{ 	
		scanf("%d",&a[i][j]);
		
		}
		}
printf("you have enterred\n");
for(i=0;i<n;i++)
	{ 	
		for(j=0;j<m;j++)
		{ 	
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
   b[0][0]=n;
   b[0][1]=m;
   k=1;
   	for(i=0;i<n;i++)
  	 {
  	 	for(j=0;j<m;j++)
   		  {    if(a[i][j]!=0)
   		 	





                                     
                                     {
   		 	 b[k][0]=i;
   		 	 b[k][1]=j;
   		 	 b[k][2]=a[i][j];
   		 	 k++;
   		 	}
   		     }
  	 }
  	 b[0][2]=k-1;
  printf("sparse matrix representation is:\n");
  	for(i=0;i<k;i++)
  	{
  	for(j=0;j<3;j++)
  	
  			{	printf("%d\t",b[i][j]);
  		
  			}
		 printf("\n");
		}
  }		

