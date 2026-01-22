#include<stdio.h>
#include<string.h>
main(){
 char binary[100];
    
    printf("Enter the binary number: ");
    scanf("%s", binary);
    
    for (int i = 0; i < strlen(binary); i++) {
    if (binary[i] == '0')
    binary[i] = '1';
    else if (binary[i] == '1')
    binary[i] = '0';
    }
    
    printf("%s\n", binary);

return 0;




}