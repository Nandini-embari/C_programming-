#include<stdio.h>
void even_odd();
void main()
{
printf("main starts\n");
even_odd();
even_odd();
even_odd();
even_odd();
even_odd();
printf("main ends\n");
}
void even_odd()
{printf("even_odd starts\n");
int a;
printf("enter the number\n");
scanf("%d",&a);
if(a%2==0)
{printf("%d is a even\n",a);
}
else
{printf("%d is a odd\n",a);
}
printf("even odd ends\n");
}