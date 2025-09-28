#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 7 == 0) {
        printf("Divisible by 7\n");
    } else {
        printf("Not divisible by 7\n");
    }
    return 0;
}