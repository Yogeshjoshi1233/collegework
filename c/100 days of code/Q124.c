#include<stdio.h>
main(){
FILE *file;
char ch;
file=fopen("sample.txt","r");

if(file==NULL){
printf("Error! Could not open file.\n");
return 1;
}
FILE *destFile;
destFile = fopen("destination.txt", "w");
if (destFile == NULL) {
printf("Error! Could not open destination file.\n");
fclose(file);
 return 1;
}
while((ch=fgetc(file))!=EOF){
fputc(ch,destFile);
}
printf("File copied successfully to destination.txt\n");
fclose(file);
return 0;
}