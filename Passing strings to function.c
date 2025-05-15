#include <stdio.h>

void print_Char(char *str) 
{ 
    int i=0;
    while (str[i]!='\0')
{ 
    printf("Character %d: %c\n",i+1, *(str+i));
    i++;
}
}
int main() 
{ 
    char str[]="srilekha"; 
    printf("Enter a string: "); 
    fgets(str,sizeof(str),stdin);
printf("\nCharacters in the string are:\n");
print_Char(str);
}
