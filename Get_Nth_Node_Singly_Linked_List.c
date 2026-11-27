#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < N; i++) {
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

    int K;
    scanf("%d", &K);

    //===== Write Your Logic Here =====
    int c=0;
    struct Node* current=head;
    while(current!=NULL){
        c++;
        if (c==K) printf("%d",current->data);
        current=current->next;
    }
}