#include <stdio.h>


int main()
{
    int arr1[100],arr2[100],temp,i=0,arr1len,arr2len;
    
    printf("Enter element of arr1, enter -1 to stop: ");
    scanf("%d",&temp);

    while(temp!=-1){
        arr1[i++]=temp;
        printf("Enter element of arr1, enter -1 to stop: ");
        scanf("%d",&temp);
    }
    
    arr1len=i;
    
    //display arr1
    printf("elements of arr1: ");
    for(int j=0;j<arr1len;j++)
     printf("%d ",arr1[j]);
    printf("\n");
    
    printf("Enter element of arr2, enter -1 to stop: ");
    scanf("%d",&temp);
    i=0;
    while(temp!=-1){
        arr2[i++]=temp;
        printf("Enter element of arr1, enter -1 to stop: ");
        scanf("%d",&temp);
    }
    
    arr2len=i;
    //display arr2
    printf("elements of arr2: ");
    for(int j=0;j<arr2len;j++)
     printf("%d ",arr2[j]);
    printf("\n"); 
    
    int flag,j;
    for(i=0;i<arr2len;i++){
        flag = 0;
        for(j=0;j<arr1len;j++){
            if (arr2[i] == arr1[j]) flag=1;
        }
        if(flag==0) {
            printf("Not a subset");
            return 0;
    }
    }
    printf("Subset");

    return 0;
}
