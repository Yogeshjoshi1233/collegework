#include<stdio.h>
#include <string.h>
main() {
char str[200], word[50], longest[50];
int i = 0, j = 0, max = 0;

printf("Enter a sentence:\n");
fgets(str, sizeof(str), stdin);

for (i = 0; i <= strlen(str); i++) {
    if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
        word[j++] = str[i];
} else {
word[j] = '\0';
if (j > max) {
    max = j;
strcpy(longest, word);
}
j = 0;
}
}

printf("Longest word: %s\nLength: %d\n", longest, max);
return 0;
}