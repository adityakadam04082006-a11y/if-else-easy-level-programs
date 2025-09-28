#include <stdio.h>
int main() 
{
    float temp;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);
    if (temp > 20) {
        printf("Suitable for swimming\n");
    } else {
        printf("Not suitable for swimming\n");
    }
    return 0;
}