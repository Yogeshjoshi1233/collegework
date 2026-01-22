#include<stdio.h>
#include <string.h>

int main() {
char name[100];
int i, len;

printf("Enter your full name: ");
gets(name);  

len = strlen(name); 

 printf("%c", name[0]); 

for (i = 0; i < len; i++) {
    if (name[i] == ' ' && name[i + 1] != '\0')
        printf("%c", name[i + 1]);  
}

return 0;
}