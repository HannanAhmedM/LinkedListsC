#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

//===== Declare Global Variables / Functions here if required =====


int findLength(struct Node* head) {
    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====


}

int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====

int count=0;
    struct Node *head = NULL, *tail = NULL;

    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);

        //===== Write Your Logic Here =====
    struct Node* y=(struct Node*)malloc(sizeof(struct Node));
    y->data=x;
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

    //===== Write Your Logic Here =====
 struct Node* current=head;
 while (current!=NULL){
    count++;
    current=current->next;
 }


printf("%d",count);
}