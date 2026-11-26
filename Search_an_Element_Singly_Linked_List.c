#include<stdio.h>
#include<stdlib.h>

//===== Declare Imports here if required =====


struct Node{
    int data;
    struct Node* next;
};

//===== Declare Global Variables / Functions here if required =====


void solve(int N){

    //===== Declare Local Variables / Functions here if required =====


    struct Node* head = NULL;
    struct Node* tail = NULL;

    for(int i=0;i<N;i++){
        int x;
        scanf("%d",&x);

        //===== Write Your Logic Here =====
    struct Node * y=(struct Node*)malloc(sizeof(struct Node));
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

    int X;
    scanf("%d",&X);

    //===== Write Your Logic Here =====
    int z=0;
    struct Node* current=head;
    while (current!=NULL){
        if (current->data==X) {z=1; break;}
        current=current->next;
    }

    if (z==1) printf("True");
    else printf("False");
}

int main(){

    //===== Declare Local Variables / Functions here if required =====


    int N;
    scanf("%d",&N);

    solve(N);

    return 0;
}