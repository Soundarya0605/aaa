#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
char a;
scanf("%s",&a);
if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U'))
printf("%s is vowel",a);
else
printf("%s is consonant",a);
return 0;
}
