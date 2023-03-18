//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

#include <stdio.h>
int main() {
    int n, num, positiveCount = 0, negativeCount = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }
    
    printf("Total positive numbers: %d\n", positiveCount);
    printf("Total negative numbers: %d\n", negativeCount);
    
    return 0;
}

