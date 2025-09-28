#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 1000) {
        printf("Number is greater than or equal to 1000\n");
    } else {
        printf("Number is less than 1000\n");
    }
    return 0;
}