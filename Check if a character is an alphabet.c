#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Character is an alphabet\n");
    } else {
        printf("Character is not an alphabet\n");
    }
    return 0;
}