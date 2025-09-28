#include <stdio.h>
int main() 
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 60) {
        printf("Senior citizen\n");
    } else {
        printf("Not a senior citizen\n");
    }
    return 0;
}