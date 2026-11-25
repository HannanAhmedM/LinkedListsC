#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

//===== Declare Global Variables / Functions here if required =====


int main() {
    int numNodes;
    scanf("%d", &numNodes);

    //===== Declare Local Variables / Functions here if required =====
int f=0;

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < numNodes; i++) {
        int value;
        scanf("%d", &value);

        //===== Write Your Logic Here =====

    struct Node * y=(struct Node*)malloc(sizeof(struct Node));
    y->data=value;
    y->next=NULL;

    if (head==NULL){
        head=y;
        tail=y;
    }
    else {
    tail->next=y;
    tail=y;
    }

    }

    int newValue;
    scanf("%d", &newValue);

    //===== Write Your Logic Here =====
    struct Node* z=(struct Node*)malloc(sizeof(struct Node));
    z->data=newValue;
    z->next=head;
    head=z;

    struct Node *current=head;
    while (current!=NULL){
        if (f==1) printf(" ");
        printf("%d",current->data);
        current=current->next;
        f=1;
    }

}