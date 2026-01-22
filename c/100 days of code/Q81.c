#include<stdio.h>
main() {
char text[1000];
int i = 0;

printf("Enter the text : ");
fgets(text, sizeof(text), stdin);

while (text[i] != '\0' && text[i] != '\n') {
i++;
}

printf("%d", i);
return 0;
}