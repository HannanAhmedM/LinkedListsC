#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

//===== Declare Global Variables / Functions here if required =====


int main() {
    int n, i;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====

int count=0;
    Node* head = NULL;
    Node* tail = NULL;

    for (i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int x;
    scanf("%d", &x);

    //===== Write Your Logic Here =====
    Node* current=head;
    while (current!=NULL){
        if (current->data==x) count++;
        current=current->next;
    }

    printf("%d",count);

}