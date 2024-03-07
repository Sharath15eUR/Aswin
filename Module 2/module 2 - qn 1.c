#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

void create(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter the value: ");
    scanf("%d",&temp->data);
    
    temp->next == NULL;
    if(head==NULL) head = temp;
}
    
    
void insert_last() {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    struct node* ptr = head;
    
    //traverse to insert_last
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    
    ptr->next = temp; //inserting operation
}

void display(){
    if(head == NULL) printf("List is not created");
    else{
        struct node* ptr = head;
        while(ptr != NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}

void remove_duplicate(){
    struct node* ptrFirst = head;
    struct node* ptrNext = head->next;
    
    while(ptrNext != NULL){
        if(ptrFirst->data != ptrNext->data){
            ptrFirst = ptrNext;
            ptrNext = ptrNext->next;
        }
        else{
            ptrFirst->next = ptrNext->next; //delinking the duplicate item
            ptrNext = ptrNext->next;
        }
    }
    
}

int main()
{
    int choice;
    while(choice!=5){
    printf("\n1. Create\n2.Insert last\n3. display\n4.remove duplicate\n5.exit");
    printf("\nEnter choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: create(); break;
        case 2: insert_last(); break;
        case 3: display(); break;
        case 4: remove_duplicate(); break;
        case 5: return 0;
    }
    }

    return 0;
}
