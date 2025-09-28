#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 10) {
        printf("Number is greater than 10\n");
    } else if (num == 10) {
        printf("Number is equal to 10\n");
    } else {
        printf("Number is less than 10\n");
    }
    return 0;
}