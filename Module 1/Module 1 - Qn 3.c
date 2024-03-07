
#include <stdio.h>
int (*fp)(int,int);
void swap(int*,int*);
void (*swapPtr)(int*,int*);
int main()
{
    int a,b;
    printf("enter Number A:");
    scanf("%d",&a);
    printf("Enter Number B:"); 
    scanf("%d",&b);
  
    swapPtr = swap;
    (*swapPtr)(&a,&b);
    
    printf("A: %d, B: %d",a,b);

    return 0;
}

void swap(int  *ptrA, int *ptrB){
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    
}

