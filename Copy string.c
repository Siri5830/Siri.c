#include<stdio.h>
#include<string.h>
int main()
{
   char str1[10],str2[20];
   printf("enter a string: ");
   fgets(str1,sizeof(str1),stdin);
   str2[strcmp(str1,"\n")]='\0';
   strcpy(str2,str1);
   printf("copied string: %s\n",str2);
}
