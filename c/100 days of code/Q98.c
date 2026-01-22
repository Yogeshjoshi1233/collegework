#include<stdio.h>
#include <string.h>

int main() {
char name[100];
int i, len, lastSpace = -1;

 printf("Enter your full name: ");
gets(name);  

len = strlen(name);

for (i = 0; i < len; i++) {
     if (name[i] == ' ')
        lastSpace = i;
}

printf("%c", name[0]);
for (i = 0; i < lastSpace; i++) {
    if (name[i] == ' ')
        printf(".%c", name[i + 1]);
}

  
printf(". ");
for (i = lastSpace + 1; i < len; i++)
    printf("%c", name[i]);

return 0;
}