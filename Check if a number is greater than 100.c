#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 100) {
        printf("Number is greater than 100\n");
    } else {
        printf("Number is not greater than 100\n");
    }
    return 0;
}