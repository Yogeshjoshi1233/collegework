#include<stdio.h>
main() {
FILE *file;
char line[200];  

file = fopen("info.txt", "r");

if (file == NULL) {
printf("Error! Could not open file.\n");
return 1;
}
printf("Reading contents of info.txt:\n\n");
while (fgets(line, sizeof(line), file)) {
 printf("%s", line); 
}
fclose(file);

return 0;
}