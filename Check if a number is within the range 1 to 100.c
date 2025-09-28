#include <stdio.h>
int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 100) {
        printf("Number is in range 1 to 100\n");
    } else {
        printf("Number is out of range\n");
    }
    return 0;
}