#include<stdio.h>
#include<conio.h>
int main(void)
{
char x[10];
int m;
scanf("%s",x);
m=strlen(x);
if(m%2==0)
{
a[m/2]='*';
a[(m/2)-1]='*';
}
else
{
a[m/2]='*';
}
print("%s",a);
return 0;
}
