#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    printf("your name is: ", name);
    scanf("%s",&name);
    printf("%s\n",name);
    int length=strlen(name);
    printf("%d\n",length);
    strcpy(name,"srilekha: ");
    printf("%s\n",name);
    int comp=strcmp("sri","srilekha");
    printf("%d\n",comp);
    strcat(name ,"coder");
    printf("%s\n",name);
}
