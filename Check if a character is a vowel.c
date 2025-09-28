#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Character is a vowel\n");
    } else {
        printf("Character is not a vowel\n");
    }
    return 0;
}