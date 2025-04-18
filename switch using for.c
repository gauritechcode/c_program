#include<stdio.h>
void main()
{
int a,b;

printf("enter the value");
scanf("%d",&a);

printf("enter your choice");
scanf("%d",&b);

for(int i=1; i<=a; i++)
{
for(int j=1; j<=a; j++)
{
  switch(b)
{
case 1:
    printf("%c ",65+j);
    break;

case 2:
    printf("%d ",j);
    break;

case 3:
    printf("* ");
    break;

default :
    printf("please try again");
}

}
 printf("\n");
}

}
