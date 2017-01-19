#include <stdio.h>

struct ListData {
    int n;
};

struct CircularLinkedList {
    struct ListData data;
    struct CircularLinkedList* next;
}CircularLinkedList;

void main(void){

}
#include <stdio.h>
#include <stdlib.h>

struct ListData {
    int n;
}ListData;

struct SinglyLinkedList {
    struct ListData data;
    struct SinglyLinkedList* next;
}SinglyLinkedList;

int insertInFront(struct SinglyLinkedList **head, struct ListData ld){
    struct SinglyLinkedList *newElement;
    newElement = malloc(sizeof(SinglyLinkedList));
    if (!newElement)
        return -1;
    newElement->data = ld;
    newElement->next = *head;
    *head = &newElement;
    return 0;
}

int traverseList(struct SinglyLinkedList *head){
    if (head == NULL){
        return -1;
    }
    struct SinglyLinkedList *elem = head;
    while (elem != NULL){
        printf("%d ", elem->data.n);
    }
    return 0;
}

void main(void){
    struct SinglyLinkedList *head = NULL;
    struct ListData newdata;
    newdata.n = 10;
    insertInFront(&head, newdata);
}
