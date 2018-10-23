//program to sort linked list

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void add(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    if(head == NULL){
        head = newNode;
        tail = newNode;
        newNode->next = head;
    }else {
tail->next = newNode;
tail = newNode;
tail->next = head;
}
}

void sortList() {
struct node *current = head, *index = NULL;
int temp;
if(head == NULL) {
printf("List is empty");
}
else {
do{
index = current->next;
while(index != head) {
if(current->data > index->data) {
temp =current->data;
current->data= index->data;
index->data = temp;
}
index= index->next;
}
current =current->next;
}while(current->next != head);
}
}
void display(){
    struct node *current = head;
    if(head == NULL){
        printf("List is empty");
    }
    else{
do{
printf("%d ", current->data);
current = current->next;
}while(current != head);
printf("\n");
    }
}

int main()
{
   add(70);
   add(90);
   add(20);
   add(100);
   add(50);
   printf("Original list: \n");
   display();
   sortList();
   printf("Sorted list: \n");
   display();

   return 0;
}
