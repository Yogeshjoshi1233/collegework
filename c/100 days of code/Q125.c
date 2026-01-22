#include<stdio.h>
main() {
FILE *fp;
char text[100];
fp = fopen("data.txt", "a");
if (fp == NULL) {
printf("Error opening file!\n");
return 1;
}
printf("Enter text to append: ");
fgets(text, sizeof(text), stdin);
fputc('\n', fp);

fputs(text, fp);
fclose(fp);

printf("File updated successfully with appended text.\n");

return 0;
}