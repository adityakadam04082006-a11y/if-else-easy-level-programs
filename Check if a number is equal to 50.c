#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 50) {
        printf("Number is equal to 50\n");
    } else {
        printf("Number is not equal to 50\n");
    }
    return 0;
}