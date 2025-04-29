#include<stdio.h>
void main()
{
int b;

printf("Enter your choice");
scanf("%d",&b);

for(int i=1; i<=10; i++)
{
switch(b)
{
case 1:
    printf("1*%d=%d \n",i,1*i);
    break;

case 2:
    printf("2*%d=%d\n",i,2*i);
    break;

case 3:
    printf("3*%d=%d\n",i,3*i);
    break;

case 4:
    printf("4*%d=%d\n",i,4*i);
    break;

case 5:
    printf("5*%d=%d\n",i,5*i);
    break;

case 6:
    printf("6*%d=%d\n",i,6*i);
    break;

case 7:
    printf("7*%d=%d\n",i,7*i);
    break;

case 8 :
    printf("8*%d=%d\n",i,8*i);
    break;

case 9 :
    printf("9*%d=%d\n",i,9*i);
    break;

case 10 :
    printf("10*%d=%d\n",i,10*i);
    break;


}
}
printf("\n");
}
