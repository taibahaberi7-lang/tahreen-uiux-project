#include<stdio.h>
#include<ctype.h>
int main()
{
char str[100];
int i=0,vowels=0,constents=0,special=0;
printf("enter a sentence");
fgets(str,sizeof(str),stdin);
while(std[i]!='\0')
{
char ch=tolower(str[i]);
if(ch>='a'&&ch<='z')
{
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
vowels++;
else
constants++;
}
else if(ch!=' '&&ch!='\n')
{
special++;
}
i++;
}
printf("vowels:%d\n",vowels);
printf("consonents:%d\n",constant);
printf("special charecters:%d\n",special);
return 0;
}
