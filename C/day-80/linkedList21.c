// program to count number of nodes

#include <stdio.h>
struct node{
    int data;
    struct node *previous;
    struct node *next;
};

struct node *head, *tail = NULL;

void addNode(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;

    if(head == NULL) {
        head = tail = newNode;
        head->previous = NULL;
        tail->next = NULL;
    }
    else {
        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
        tail->next = NULL;
    }
}

int countNodes() {
    int counter = 0;
    struct node *current = head;

    while(current != NULL) {
        counter++;
        current = current->next;
    }
    return counter;
}

void display() {
    struct node *current = head;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of doubly linked list: \n");
    while(current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main()
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    addNode(5);

    display();

    printf("\nCount of nodes present in the list: %d", countNodes());

    return 0;
}
