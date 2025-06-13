include<stdio.h>
int top=-1;
void push(int n,int a[20]);
void pop(int n,int a[20]);
void display(int n,int a[20]);
void main()
	{ int n,c,i;
	  printf("enter the size of the stack");
	  scanf("%d",&n);
	  int a[n];
	  for(i=0;i<=n;i++)
	  {	printf("\n1.push 2.pop 3.display");
	  	printf("\nEnter the choice");
	  	scanf("%d",&c);
	  	switch(c)
	  	{ 	
	  		case 1:
	  		        push(n,a);
	  		        break;
	  		case 2:
	  		        pop(n,a);
	  		        break;
	  		case 3:
	  		        display(n,a);
	  		        break;
	  		default:
	  		         printf("invalid choice");
	  		         break;
	       }
	   }}

void push(int n,int a[20])
	{  
	    if(top==n-1)
	    {
	     printf("overflow");
	    }
	  else
	    {   top=top+1;
	      

printf("enter the element");
	      scanf("%d",&a[top]);
	      
	      
	    }
	 }
void pop(int n,int a[20])
     { if(top==-1)
        {
        printf("underflow");
        }
       else 
       { 
         printf("the deleted element is %d",a[top--]);
         
       }
     }
 void display(int n,int a[20])
 { int i;
 for(i=top;i>=0;i--)
    { 
      printf("%d",a[i]);
    }
 }
