#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

int findMax(Node* head) {
    //===== Write Your Logic Here =====
int max=head->data;

Node* current=head;
while (current!=NULL){
    if (current->data>max) max=current->data;
    current=current->next;
}

return max;
}

int main() {
    int numNodes;
    scanf("%d", &numNodes);

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < numNodes; i++) {
        int value;
        scanf("%d", &value);

        //===== Write Your Logic Here =====
    Node* x=(Node*)malloc(sizeof(Node));
    x->data=value;
    x->next=NULL;

    if (tail==NULL){
        head=x;
        tail=x;
    }

    else {
        tail->next=x;
        tail=x;
    }

    }

    //===== Write Your Logic Here =====
    printf("%d",findMax(head));

}