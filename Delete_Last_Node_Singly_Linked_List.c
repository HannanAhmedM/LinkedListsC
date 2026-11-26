#include<stdio.h>
#include<stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


struct Node{
    int data;
    struct Node* next;
};

void solve(int N){

    //===== Declare Local Variables / Functions here if required =====


    struct Node* head = NULL;
    struct Node* tail = NULL;

    for(int i=0;i<N;i++){
        int x;
        scanf("%d",&x);

        //===== Write Your Logic Here =====
    struct Node *y=(struct Node*)malloc(sizeof(struct Node));
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

    int f=1;
    
    struct Node *current=head;
    while (current->next!=tail){
        current=current->next;
    }

    free(tail);
    current->next=NULL;
    tail=current;

    current=head;
    while(current!=NULL){
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