//Deletion in singly linked list at beginning

#include<stdio.h>
#include<stdlib.h>
void create(int);
void begdelete();
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
        printf("\n1.Append List\n2.Delete node\n3 for display List \n4.Exit\n.Enter your choice?");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nEnter the item\n");
            scanf("%d",&item);
            create(item);
            break;
            case 2:
            begdelete();
            break;
            case 3:
            traverse();
            break;
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\nPlease enter valid choice\n");
        }

    }while(choice != 3);
}
void create(int item)
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
void begdelete()
    {
        struct node *ptr;
        if(head == NULL)
        {
            printf("\nList is empty");
        }
        else
        {
            ptr = head;
            head = ptr->next;
            free(ptr);
            printf("\n Node deleted from the begining ...");
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

