#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

int main(){
    int n, i, angka;
    struct node *head, *temp, *tail, *newNode;

    head = malloc(sizeof(struct node));

    printf("Berapa kali : ");
    scanf("%d", &n);

    printf("Masukkan angka : \n");
    scanf("%d", &angka);
    head->data = angka;
    head->next = NULL;
    head->prev = NULL;

    temp = head;
    for(i = 2; i <= n; i++){
        newNode = malloc(sizeof(struct node));
        scanf("%d", &angka);
        newNode->data = angka;
        newNode->next = NULL;
        newNode->prev = temp;
        temp->next = newNode;
        temp = newNode;
    }

    printf("\n");
    temp = newNode;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->prev;
    }

    /*struct node *temp, *head, *_1, *_2, *_3, *_4;

    head = malloc(sizeof(struct node));
    head -> data = 1;
    head -> next = NULL;
    head -> prev = NULL;

    _1 = malloc(sizeof(struct node));
    _1 -> data = 2;
    _1 -> next = NULL;
    _1 -> prev = head;
    head -> next = _1;

    _2 = malloc(sizeof(struct node));
    _2 -> data = 3;
    _2 -> next = NULL;
    _2 -> prev = _1;
    _1 -> next = _2;

    _3 = malloc(sizeof(struct node));
    _3 -> data = 4;
    _3 -> next = NULL;
    _3 -> prev = _2;
    _2 -> next = _3;

    _4 = malloc(sizeof(struct node));
    _4 -> data = 5;
    _4 -> next = NULL;
    _4 -> prev = _3;
    _3 -> next = _4;

    temp = head;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }

    printf("\n\n");
    temp = _4;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> prev;
    }*/

    return 0;
}