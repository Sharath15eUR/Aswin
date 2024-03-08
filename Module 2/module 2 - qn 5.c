#include <stdio.h>
#include <string.h>

int stack[100];
int top=0;

void push(int data){
    stack[top++]=data;
}

int pop(){
    if(top<0) {
        printf("stack empty");
        return 0;
    }
    return stack[top--];
}

int isEmpty(){
    if(top<0){
        return 1;
    }
    else return 0;
}

int main()
{
    char strings[100],choice;
    printf("enter your string: ");
    scanf("%[^\n]",strings);
    
    for(int i=0;i<strlen(strings);i++){
        push(strings[i]);
    }
    
    printf("Do you want to reverse(y/n)? ");
    scanf(" %c",&choice);
    if(choice == 'y'){
    while(!isEmpty()){
        printf("%c",pop());
    }
    }
    
    

    return 0;
}
