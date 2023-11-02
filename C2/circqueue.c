#include <stdio.h>
#define size 5
int front =  - 1;
int rear =  - 1;
void insertq(int cq[], int item)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        printf("queue is full");
        return;
    }
    else if (rear ==  - 1)
    {
        rear++;
        front++;
    }
    else if (rear == size - 1 && front > 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    cq[rear] = item;
}
void display(int cq[])
{
    int i;
    printf("\n");
    if (front > rear)
    {
        for (i = front; i < size; i++)
        {
            printf("%d ", cq[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d ", cq[i]);
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", cq[i]);
            printf("\nFront element is %d ", cq[front]);
            printf("\nRear element is %d ", cq[rear]);
    }
}
void deleteq(int cq[])
{
    if (front ==  - 1)
    {
        printf("Queue is empty ");
    }
    else if (front == rear)
    {
        printf("\n %d deleted", cq[front]);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        printf("\n %d deleted", cq[front]);
        front++;
    }
}
int main()
{
    int n, ch;
    int cq[size];
    do
    {
        printf("\nCircular Queue:\n1. Insert \n2. Delete\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                insertq(cq, n);
                break;
            case 2:
                deleteq(cq);
                break;
            case 3:
                display(cq);
                break;
        }
    }while (ch != 0);
}

