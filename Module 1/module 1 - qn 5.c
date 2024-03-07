
#include <stdio.h>

int main()
{
    int n,k;
    printf("enter the n Value: ");
    scanf("%d",&n);
    int a[n][n],b[n][n],result[n][n];
    
    int i,j;
    printf("enter matrix A elements: ");
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    
    printf("enter matrix B elements: ");    
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
        
    //matrix multiplication
    
    for(i=0;i<n;i++) {
     for(j=0;j<n;j++) {
         result[i][j]=0;
         for(k=0;k<n;k++){
        result[i][j] += (*(*(a + i) + k)) * ( *(*(b + k) + j) );
     }
     }
    }
     
    printf("the results are: \n");    
    for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
        printf("%d ",result[i][j]); 
      }
      printf("\n");
    }
        

    return 0;
}
