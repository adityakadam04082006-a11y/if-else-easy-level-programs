#include <stdio.h>
int main()
 {
    float height;
    printf("Enter height in cm: ");
    scanf("%f", &height);
    if (height >= 120) {
        printf("Can ride the roller coaster\n");
    } else {
        printf("Cannot ride the roller coaster\n");
    }
    return 0;
}