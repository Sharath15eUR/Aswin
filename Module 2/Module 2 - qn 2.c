
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL;

void create_head(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->next = NULL;
    temp->prev = NULL;
    printf("Enter data: ");
    scanf("%d",&temp->data);
    if(head==NULL)
     head = temp;
}

void insert(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d",&temp->data);
    
    //traverse upto last
    struct node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    
    ptr->next = temp;
    temp->prev = ptr;
    temp->next = NULL;
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

void rotate(){
    struct node* headPtr = head;
    struct node* ptr = head;
    //traverse upto last
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    (ptr->prev)->next = NULL;
    ptr->prev=NULL;
    ptr->next=headPtr;
    headPtr->prev = ptr;
    head = ptr;
}

void print_list(){
    struct node* ptr = head;
    while(ptr->next != NULL){
        printf("Prev Addr: %p, MyAddr: %p, Next Addr: %p, Data: %d\n",ptr->prev,ptr,ptr->next,ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int choice,N;
    while(choice!=5){
    printf("\n1. Create\n2.Insert last\n3. display\n4.Rotate\n5.exit");
    printf("\nEnter choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: create_head(); break;
        case 2: insert(); break;
        case 3: display(); break;
        case 4: 
          printf("Enter number of rotates: ");
          scanf("%d",&N);
          for(int i=0;i<N;i++) 
          rotate(); 
           break;
        case 6: print_list(); break;   
        case 5: return 0;
    }
    }

    return 0;
}

