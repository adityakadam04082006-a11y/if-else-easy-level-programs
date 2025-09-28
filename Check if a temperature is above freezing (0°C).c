#include <stdio.h>
int main()
 {
    float temp;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);
    if (temp > 0) {
        printf("Above freezing point\n");
    } else {
        printf("At or below freezing point\n");
    }
    return 0;
}