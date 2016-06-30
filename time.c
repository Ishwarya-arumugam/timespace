#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int a,i;
char b[100];
int c[20]={0};
clrscr();
scanf("%d",b);
a=strlen(b);
for(i=a-1;i>0;i--)
{
if(b[i]!=b[i-1])
{
int t=b[i]%97;
if(c[t]==0)
{
printf("%s",b[i]);
c[t]=1;
}
}
}
getch();
}
