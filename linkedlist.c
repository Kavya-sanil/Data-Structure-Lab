#include<stdlib.h>
#include<stdio.h>
struct node
{
  int data;
  struct node *next;
}*head;
void begin_insert();  
void last_insert();  
int random_insert();  
void begin_delete();  
void last_delete();  
int random_delete();  
void display();
int main()
{
    int op=0 , choice;
    while(op!=4)
    {
      printf("\n1.Insertion\t2.Deletion\t3.Display\t4.Exit\tEnter your choice: ");
      scanf("%d", &op);
      switch(op)  
      {  
         case 1:  
           printf("1.Insertion at beginning\t2.Insertion at End\t3.Insertion at any location\tEnter your choice: ");
           scanf("%d",&choice);
           if(choice==1)
              begin_insert();
           else if(choice==2)
              last_insert();
           else if(choice==3)
              random_insert();
           else
              printf("Wrong Choice\n");
              break;  
         case 2:  
            printf("1.Delete from beginning\t2.Delete from end\t3.Delete from any location\tEnter your choice: ");
            scanf("%d",&choice);
            if(choice==1)
              begin_delete();
            else if(choice==2)
              last_delete();
            else if(choice==3)
              random_delete();
            else
              printf("Wrong Choice\n");
              break;  
         case 3:  
            display();    
            break;  
         case 4:  
            return 0;
         default:  
            printf("Invalid choice\n");
        }
    }  
}
void begin_insert()
{
   struct node *ptr = (struct node *)malloc(sizeof(struct node));
   int item;
   printf("Enter the data to be inserted: ");
   scanf("%d",&item);
   ptr->data=item;
   ptr->next=head;
   head=ptr;
   printf("Element Inserted!\n");
}
void last_insert()
{
   struct node *ptr = (struct node*) malloc(sizeof(struct node)) , *temp;
   int item;
   printf("Enter the data: ");
   scanf("%d",&item);
   ptr->data=item;
   if(head==NULL)
   {
      ptr->next=NULL;
      head=ptr;
      printf("Node is empty. Element Inserted at beginning\n");
   }
   else
   {
      temp=head;
      while (temp->next!=NULL)
         temp=temp->next;
      temp->next=ptr;
      ptr->next=NULL;
      printf("New Node Inserted at last\n");
   }
}
int random_insert()
{
   if (head==NULL)
   {
      printf("List is Empty. Element will be inserted at beginning\n");
      begin_insert();
   }
   else
   {
      int item , pos;
      struct node *ptr=(struct node *)malloc(sizeof(struct node)), *temp , *temp1;
      printf("Enter the position at which element is to be inserted: ");
      scanf("%d",&pos);
      if (pos==1)
        begin_insert();
      else if(pos<1)
        printf("Invalid position\n");
      else
      {
         temp1=head;
         for (int i = 1; i < pos; i++)
         {
            temp=temp1;
            if (temp==NULL)
            {
              printf("Invalid position.\n");
              return 0;
            }
            temp1=temp1->next;
            if (i+1==pos && temp1==NULL)
            {
               last_insert();
               return 0;
            }
         }
         printf("Enter the data to be inserted: ");
         scanf("%d",&item);	
         ptr->data=item;      
         ptr->next=temp1;
         temp->next=ptr;
         printf("New Node Inserted at position %d\n" , pos);

   }
}
void begin_delete()
{
   if(head==NULL)
     printf("List is Empty!\n");
   else
   {
      struct node* ptr = head;
      head=ptr->next;
      printf("Node Deleted and deleted element is %d\n" , ptr->data);
      free(ptr);
   }
}
void last_delete()
{
   if (head==NULL)
      printf("List is empty\n");
   else if (head->next==NULL)
      begin_delete();
   else
   {
      struct node *ptr=head , *temp;
      while (ptr->next!=NULL)
      {
        temp=ptr;
        ptr=ptr->next;
      }
      temp->next=NULL;
      printf("Node deleted and deleted element is %d\n", ptr->data);
      free(ptr);
   }
}
int random_delete()
{
   if (head==NULL)
      printf("List is empty\n");
   else
   {
      int pos;
      printf("Enter the position at which element is to be deleted: ");
      scanf("%d",&pos);
      if (pos<1)
         printf("Invalid position\n");
      else if(pos==1)
         begin_delete();
      else
      {
         struct node *ptr, *temp=head;
         for (int i = 1; i < pos; i++)
         {
            ptr=temp;
            temp=temp->next;
            if (temp==NULL)
            {
               printf("Invalid position\n");
               return 0;
            }
         }      
         ptr->next=temp->next;
         printf("Node deleted and deleted element is %d\n" , temp->data);
         free(temp);
      }
   }  
}

void display()
{
   struct node* ptr=head;
   if (head!=NULL)
   {
      printf("The Elements in the list are:\n");
      while (ptr->next!=NULL)
      {
        printf("%d,",ptr->data);
        ptr=ptr->next;
      }
      printf("%d\n",ptr->data);
   }
   else
     printf("List is Empty\n");
}
