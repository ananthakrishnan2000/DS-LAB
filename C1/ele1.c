#include<stdio.h>
#include<stdlib.h>
#define size 30

void insert(int arr[], int *n)
{
     int i,pos,ele;
     printf("Enter the element:\n");
     scanf("%d",&ele);
     printf("enter the position:\n");
     scanf("%d",&pos);
     for(i=(*n)-1; i>=pos-1; i--)
     {
        arr[i+1] = arr[i];
        
     }
     arr[pos-1] = ele;
     *n = *n + 1;
     }
     void delete(int arr[],int *n)
     {
     int i,pos;
     printf("enter the position to delete the element\n");
     scanf("%d",&pos);
     for(i=pos-1;i<(*n)-1;i++)
     {
     arr[i] = arr[i+1];
     }
     *n= *n - 1;
     }
     
     void display(int arr[],int n)
     {
     int i;
     for(i=0;i<n;i++)
     printf("%d ",arr[i]);
     printf("\n");
     }
     void main()
     {
     int arr[size],i,n,ch;
     printf("Enter initial size of array\n");
     scanf("%d",&n);
     printf("enter Array elements\n");
     for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
     for(;;)
     {
     printf("\nMenu\n");
     printf("1.insert\n 2. delete\n 3. display\n 4.exit\n");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
     insert(arr,&n);
     break;
     case 2:
     delete(arr,&n);
     break;
     case 3:
     display(arr,n);
     break;
     case 4:
     exit(0);
     }
     }
     }
    
