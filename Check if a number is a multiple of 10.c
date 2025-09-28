#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 10 == 0) {
        printf("Number is a multiple of 10\n");
    } else {
        printf("Number is not a multiple of 10\n");
    }
    return 0;
}