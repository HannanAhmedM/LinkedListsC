#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

//===== Declare Global Variables / Functions here if required =====


void solve(int N){

    //===== Declare Local Variables / Functions here if required =====


    Node* head = NULL;
    Node* tail = NULL;

    for(int i=0;i<N;i++){
        int x;
        scanf("%d",&x);

        //===== Write Your Logic Here =====
    Node* y=(Node*)malloc(sizeof(Node));
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

    int position;
    scanf("%d",&position);

    //===== Write Your Logic Here =====
    if (position==1){
        Node* del=head;
        head=head->next;
        free(del);
    }
    
    Node* current=head;
    Node* del;
    int k=1;
    while (current!=NULL&&current->next!=NULL){
        if (k==position-1){
            del=current->next;
            current->next=del->next;
            free(del);
        }
        k++;
        current=current->next;
    }

    current=head;
    int f=1;
    while (current!=NULL){
        if (f==0) printf(" ");
        printf("%d",current->data);
        current=current->next;
        f=0;
    }
}

int main(){

    int N;
    scanf("%d",&N);

    solve(N);

    return 0;
}