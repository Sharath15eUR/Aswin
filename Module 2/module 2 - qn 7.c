
#include <stdio.h>

int front = -1;
int rear = -1;

int queue[100];

void enqueue(){
    int data;
    printf("enter the element to enqueue: ");
    scanf("%d",&data);
    //if there are no elements
    if(front == -1) {
        front++;
        rear++;
    }
    else rear++;
    queue[rear] = data;
}

void dequeue(){
    if (front<=rear)
    printf("Dequeued element: %d", queue[front++]);
    else printf("Queue is empty ");
}

void display(){
    for(int i=front;i<=rear;i++)
      printf("%d ",queue[i]);
}

int count(){
    return rear-front+1;
}

int main()
{
    int choice,N;
    while(1){
    printf("\n1.enqueue\n2.delete\n3.display\n4.count\n5.exit\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1: enqueue(); break;
        case 2: 
        printf("How many elements to delete: ");
        scanf("%d",&N);
        for(int i=0;i<N;i++)dequeue(); 
        break;
        case 3: display(); break;
        case 4: printf("No. of elements: %d",count());break;
        case 5: return 0;
    }
    }

    return 0;
}

