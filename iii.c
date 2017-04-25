#include<stdio.h>
#include<math.h>
int main()
{
int a,i,count=0;
    scanf("%d",&a);
for(i=0;i<=a;i++)
{
    a=a/10;
count++;
}
printf("%d",count);
    return 0;
}
