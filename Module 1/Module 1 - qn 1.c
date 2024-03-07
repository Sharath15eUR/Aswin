#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num & 1) {
        printf("%d is odd number", num);
    } else {
        printf("%d is even number", num);
    }
    
    return 0;
}
