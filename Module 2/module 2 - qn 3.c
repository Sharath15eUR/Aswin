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
    else printf("Queue is empty");
}

void display(){
    for(int i=front;i<=rear;i++)
      printf("%d ",queue[i]);
}

void sort(){
    //bubble sorting
    int temp,i,j;
    for(j=front;j<rear;j++){
      for(i=front;i<rear;i++){
        
        if(queue[i]>queue[i+1]) {
            //swap
            temp = queue[i];
            queue[i]=queue[i+1];
            queue[i+1]=temp;
        }
    }
    }
}

int main()
{
    int choice;
    while(1){
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.sort\n5.exit\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        case 3: display(); break;
        case 4: sort();break;
        case 5: return 0;
    }
    }

    return 0;
}
