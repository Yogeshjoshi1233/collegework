#include<stdio.h>
#include <ctype.h>
main() {
FILE *in, *out;
char ch;

in = fopen("input.txt", "r");
if (in == NULL) {
printf("Error: input.txt not found!\n");
return 1;
}

out = fopen("output.txt", "w");
if (out == NULL) {
printf("Error: Could not create output.txt!\n");
fclose(in);
return 1;
}
while ((ch = fgetc(in)) != EOF) {
ch = toupper(ch);   
fputc(ch, out);  
}
fclose(in);
fclose(out);

printf("Converted text written to output.txt successfully.\n");

return 0;
}