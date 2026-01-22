#include<stdio.h>
#include <string.h>
 main() {
char text[50];
char find;
int frequency = 0;

printf("Enter the text: ");
fgets(text, sizeof(text), stdin);

text[strcspn(text, "\n")] = '\0';

printf("Enter the character you want to find in the text: ");
scanf("%c", &find);

for (int i = 0; text[i] != '\0'; i++) {
    if (text[i] == find)
        frequency++;
}

printf("Frequency of '%c' = %d\n", find, frequency);

return 0;
}