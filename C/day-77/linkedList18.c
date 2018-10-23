// program for find maximum and minimum

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Represents the node of list.
struct node{
    int data;
    struct node *next;
};

//Declaring head and tail pointer as null.
struct node *head = NULL;
struct node *tail = NULL;

//This function will add the new node at the end of the list.
void add(int data){
    //Create new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    //Checks if the list is empty.
    if(head == NULL){
        //If list is empty, both head and tail would point to new node.
        head = newNode;
        tail = newNode;
        newNode->next = head;
    }else {
        //tail will point to new node.
        tail->next = newNode;
        //New node will become new tail.
        tail = newNode;
        //Since, it is circular linked list tail will point to head.
        tail->next = head;
    }
}

//Finds out the minimum value node in the list
void minNode() {
    struct node *current = head;
    //Initializing min to initial node data
    int min = head->data;
    if(head == NULL) {
        printf("\nList is empty");
    }
    else {
         do{
             //If current node's data is smaller than min
             //Then replace value of min with current node's data
             if(min > current->data) {
                 min = current->data;
             }
             current= current->next;
        }while(current != head);

        printf("Minimum value node in the list: %d", min);
    }
}

//Finds out the maximum value node in the list
void maxNode() {
    struct node *current = head;
    //Initializing max to initial node data
    int max = head->data;
    if(head == NULL) {
        printf("\nList is empty");
    }
    else {
         do{
             //If current node's data is greater than max
             //Then replace value of max with current node's data
             if(max < current->data) {
                 max = current->data;
             }
             current= current->next;
            }while(current != head);

        printf("\nMaximum value node in the list: %d", max);
    }
}

int main()
{
    //Adds data to the list
    add(5);
    add(20);
    add(10);
    add(1);
    //Prints the minimum value node in the list
    minNode();
    //Prints the maximum value node in the list
    maxNode();

   return 0;
}
