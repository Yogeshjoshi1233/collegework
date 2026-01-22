#include<stdio.h>
main() {
char text[50];
int i = 0;

printf("Enter the text: \n");

char ch;
while (i < 49 && (ch = getchar()) != '\n' && ch != EOF) {
        
if (isspace(ch))
    ch='-';
            
text[i]== ch;
i++;
}
text[i] = '\0';
printf("%s",text);

return 0;
}