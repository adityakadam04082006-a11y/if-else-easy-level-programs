#include <stdio.h>
int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0 && num % 3 == 0) {
        printf("Number is divisible by both 2 and 3\n");
    } else {
        printf("Number is not divisible by both 2 and 3\n");
    }
    return 0;
}