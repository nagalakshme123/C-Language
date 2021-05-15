#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("enter marks of student:");
scanf("%d",&a);
if(a>85 && a<100)
{
printf("grade A");
}
else if(a>70 && a<84)
{
printf("grade B");
}
else if(a>55 && a<69)
{
printf("grade C");
}
else if(a>40 && a<54)
{
printf("grade D");
}
else
{
printf("grade F");
}
getch();
return 0;
}







