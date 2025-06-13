
#include<stdio.h>
int front,rear=-1;
void enqueue(int n,int a[20]);
void dequeue(int n,int a[20]);
void display(int n,int a[20]);
void main()
	{ int n,c,i;
	  printf("enter the size of the queue");
	  scanf("%d",&n);
	  int a[n];
	  for(i=0;i<n;i++)
	  {	printf("\n1.enqueue 2.dequeue 3.display");
	  	printf("\nEnter the choice");
	  	scanf("%d",&c);
	  	switch(c)
	  	{ 	
	  		case 1:
	  		        enqueue(n,a);
	  		        break;
	  		case 2:
	  		        dequeue(n,a);
	  		        break;
	  		case 3:
	  		        display(n,a);
	  		        break;
	  		default:
	  		         printf("invalid choice");
	  		         break;
	       }
	   }}

void enqueue(int n,int a[20])
	{  
	    if(front==0&&rear==n-1)
	    {
	     printf("overflow");
	    }
	  else
	    {   rear++;
	     

 printf("enter the element");
	      scanf("%d",&a[rear]);
	      
	      
	    }
	 }
void dequeue(int n,int a[20])
     { if(front ==-1)
        {
        printf("underflow");
        }
       else 
       { 
         printf("the deleted element is %d",a[front]);
         front++;
       }
     }
 void display(int n,int a[20])
 { int i;
 for(i=front;i<=rear ;i++)
    { 
      printf("%d",a[i]);
    }
 }
