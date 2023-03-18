//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task

#include <stdio.h>
int main() {
    int count = 0;
    int num;
    
    while(1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if(num % 8 == 0) {
            count++;
            printf("%d is valid\n", num);
        } else {
            printf("%d is not valid\n", num);
            break;
        }
    }
    
    printf("You entered %d valid numbers\n", count);
    
    return 0;
}
