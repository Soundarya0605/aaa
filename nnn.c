#include<stdio.h>
#include<conio.h>
#include<>math.h>
int main()
{
char a;
clrscr();
scanf("%s",&a);
if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
printf("%s is an alphabet",a);
else
printf("%s is not an alphabet",a);
getch();
return 0;
}
