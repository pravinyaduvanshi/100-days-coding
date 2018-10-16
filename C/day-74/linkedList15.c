// Insertion in circular doubly linked list at end

#include<stdio.h>
#include<stdlib.h>
void insertion_last(int);
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void main ()
{
    int choice,item;
    do
    {
        printf("\nEnter the item which you want to insert?\n");
        scanf("%d",&item);
        insertion_last(item);
        printf("\nPress 0 to insert more ?\n");
        scanf("%d",&choice);
    }while(choice == 0);
}
void insertion_last(int item)
{
   struct node *ptr = (struct node *) malloc(sizeof(struct node));
   struct node *temp;
    if(ptr == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
        ptr->data=item;
       if(head == NULL)
       {
           head = ptr;
           ptr -> next = head;
           ptr -> prev = head;
       }
       else
       {
          temp = head;
          while(temp->next !=head)
          {
              temp = temp->next;
          }
          temp->next = ptr;
          ptr ->prev=temp;
          head -> prev = ptr;
           ptr -> next = head;
        }
   }
     printf("\nNode Inserted\n");
}
