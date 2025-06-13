#include <stdio.h>
int front = -1, rear = -1;
void enqueue(int n, int a[20]);
void dequeue(int n, int a[20]);
void display(int n, int a[20]);
void main()
{
    int n, c, i;
    printf("enter the size of the queue");
    scanf("%d", &n);
    int a[n];
    // for(i=0;i<n;i++)
    while (c != 4)
    {
        printf("\n1.enqueue 2.dequeue 3.display 4.exit");
        printf("\nEnter the choice");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            enqueue(n, a);
            break;
        case 2:
            dequeue(n, a);
            break;
        case 3:
            display(n, a);
            break;
        default:
            printf("invalid choice");
            break;
        }
    }
}

void enqueue(int n, int a[20])
{
    if (front == (rear + 1) % n)
    {
        printf("overflow");
    }

    else
    {
        if (front == -1)
        {
            front++;
        }
        rear = (rear + 1) % n;
        printf("enter the element");
        scanf("%d", &a[rear]);
    }
}
void dequeue(int n, int a[20])
{
    if (front && rear == -1)
    {
        printf("underflow");
    }
    else if (front == rear)
    {
        printf("the deleted element is %d", a[front]);
        front = rear = -1;
    }
    else
    {
        printf("the deleted element is %d", a[front]);
        front = (front + 1) % n;
    }
}
void display(int n, int a[20])
{
    int i;
    if (front && rear == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        for (i = front; i != rear; (i = (i + 1) % n))
        {
            printf("%d\t", a[i]);
        }

        printf("\n");
    }
