// Insertion at beginning in singly linked list

#include<stdio.h>
#include<stdlib.h>
void beginsert(int);
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main ()
{
    int choice,item;
    do
    {
        printf("\nEnter the item which you want to insert?\n");
        scanf("%d",&item);
        beginsert(item);
        printf("\nPress 0 to insert more or 1 for stop inserting?\n");
        scanf("%d",&choice);
    }while(choice == 0);

    traverse();
}
void beginsert(int item)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));
        if(ptr == NULL)
        {
            printf("\nOVERFLOW\n");
        }
        else
        {
            ptr->data = item;
            ptr->next = head;
            head = ptr;
            printf("\nNode inserted\n");
        }

    }

void traverse()
    {
        struct node *ptr;
        ptr = head;
        if(ptr == NULL)
        {
            printf("Empty list..");
        }
        else
        {
            printf("printing values . . . . .\n");
            while (ptr!=NULL)
            {
                printf("\n%d",ptr->data);
                ptr = ptr -> next;
            }
        }
     }
