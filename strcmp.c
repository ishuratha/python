#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
int result,i;
printf("\n Enter the first string");
gets(str1);
printf("\n Enter the second string");
gets(str2);
for(i=0;str1[i]==str2[i]&&str1[i]=='\0';i++)
if(str1[i],str2[i])
{
printf("\n str1 is less than str2");
}
elseif(str1[i]>str2[i])
{
printf("\n str2 is less than str1");
}
else
{
printf("\n str1 is equal to str2");
}
return 0;
}
