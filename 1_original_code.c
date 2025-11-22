#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void) {
    int num1, num2, op, result1, result2;
    
    srand((unsigned)time(NULL));
    num1 = rand() % 10 + 1;  // Generate number 1-10
    num2 = rand() % 10 + 1;  // Generate number 1-10
    op = rand() % 4;         // Generate 0-3 for 4 operations
    
    switch(op) {
        case 0:
            printf("%d+%d=", num1, num2);
            scanf("%d", &result1);
            if(num1 + num2 == result1)
                printf("You are right!\n");
            else
                printf("You are wrong!\n");
            break;
            
        case 1:
            printf("%d-%d=", num1, num2);
            scanf("%d", &result1);
            if(num1 - num2 == result1)
                printf("You are right!\n");
            else
                printf("You are wrong!\n");
            break;
            
        case 2:
            printf("%d*%d=", num1, num2);
            scanf("%d", &result1);
            if(num1 * num2 == result1)
                printf("You are right!\n");
            else
                printf("You are wrong!\n");
            break;
            
        case 3:
            printf("%d/%d=", num1, num2);  // Fixed the printf format
            scanf("%d", &result1);
            printf("余数为 = ");
            scanf("%d", &result2);
            if((num1 / num2 == result1) && (num1 % num2 == result2))
                printf("You are right!\n");
            else
                printf("You are wrong!\n");
            break;
    }
    
    return 0;
}