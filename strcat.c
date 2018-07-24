#include<stdio.h>
#include<string.h>
main()
{
char s1[20],s2[20];
printf("\n Enter first string");
gets(s1);
printf("\n Enter second string");
gets(s2);
strcat(s1,s2);
printf("\n The concatenate string is: %s",s1);
getch();
}
