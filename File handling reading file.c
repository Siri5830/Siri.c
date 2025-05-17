#include <stdio.h>
int main() 
{
 FILE *fp = fopen("data.txt", "r");
 char buffer[100];
 if (fp == NULL) 
 {
 printf("File not found!\n");
 return 1;
 }
 while(fgets(buffer, 100, fp)) 
 {
     printf("%s", buffer);
 }
 fclose(fp);
 return 0;
}
