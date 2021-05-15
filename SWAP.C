#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
clrscr();
printf("enter values of a,b before swapping:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("value of a after swapping:%d\n",a);
printf("value of b after swapping:%d\n",b);
getch();
return 0;
}