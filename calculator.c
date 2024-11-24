#include <stdio.h>
int main()
{
char operator;
int a ,b ;
printf("enter operator:");
scanf("%c",&operator);
printf("enter 2 numbers:");
scanf("%d%d",&a,&b);
switch(operator)
{
case '+':printf("a+b=%d",a+b);
break ;
case '-':printf("a-b=%d",a-b);
break ;
case '*':printf("a*b=%d",a*b);
break ;
case '/':
if(a==0)
{
printf("zero");
}
else
{
printf("undefined");
}
break ;
default:printf("operator doesnot exist");

}

return 0;

}