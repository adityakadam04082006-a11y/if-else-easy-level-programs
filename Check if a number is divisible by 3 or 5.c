#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 || num % 5 == 0) {
        printf("Number is divisible by 3 or 5\n");
    } else {
        printf("Number is not divisible by 3 or 5\n");
    }
    return 0;
}