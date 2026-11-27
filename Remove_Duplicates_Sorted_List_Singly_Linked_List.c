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


    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < numNodes; i++) {
        int value;
        scanf("%d", &value);

        //===== Write Your Logic Here =====
    Node* x=(Node*)malloc(sizeof(Node));
    x->data=value;
    x->next=NULL;

    if (head==NULL){
        head=x;
        tail=x;
    }

    else {
        tail->next=x;
        tail=x;
    }

    }

    //===== Write Your Logic Here =====
    Node* current=head;
    Node* del;
    while (current!=NULL&&current->next!=NULL){
        if (current->data==current->next->data){
            del=current->next;
            current->next=del->next;
            free(del);
        }
        else current=current->next;
    }

    int f=1;
    current=head;

    while(current!=NULL){
        if (f==0) printf(" ");
        printf("%d",current->data);
        current=current->next;
        f=0;
    }

}