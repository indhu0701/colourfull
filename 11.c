#include<stdio.h>
#include<conio.h>
int main()
{
int base,exponent,counter result=1;
printf("enter base&exponent\n");
scanf("%d%d",&base,&exponent);
fpr(counter=0;counter<exponent;counter++)
{
result=result*base;
}
printf("%d^%d=%d",base,exponent,result);
getch();
return 0;
}
