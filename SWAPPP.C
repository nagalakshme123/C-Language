#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("enter values of a,b before swapping:\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a after swapping:%d\n",a);
printf("value of b after swapping:%d",b);
getch();
return 0;
}



