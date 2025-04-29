#include<stdio.h>
void main()
{
int a,b;
printf("Enter the value");
scanf("%d",&a);

printf("Enter your choice");
scanf("%d",&b);

for(int i=0; i<=a; i++)
{
for(int j=0; j<=a; j++)
{
switch(b)
{
case 1:
    printf("* ");
    break;

case 2:
    printf("%d ",i);
    break;

case 3:
    printf("%c ",65+i);
    break;

case 4:
    printf("%d ",j);
    break;

case 5:
    printf("%c ",65+j);
    break;

default :
    printf("please try again");
     break;
}
}
printf("\n");
}







}
