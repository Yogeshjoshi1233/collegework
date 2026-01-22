#include<stdio.h>
#include <string.h>

int main() {
char str[100], word[100];
int i = 0, j = 0, k;

printf("Enter a sentence: ");
gets(str);  

while (str[i] != '\0') {
    if (str[i] != ' ' && str[i] != '\0') {
        word[j++] = str[i];
} else {
    word[j] = '\0';
        for (k = j - 1; k >= 0; k--)
printf("%c", word[k]);
printf(" ");
j = 0;
}
i++;
}

word[j] = '\0';
for (k = j - 1; k >= 0; k--)
 printf("%c", word[k]);

return 0;
}