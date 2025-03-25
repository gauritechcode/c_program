#include<stdio.h>
void main()
{
int a;
printf("Enter the value");
scanf("%d",&a);

switch(a){

case 1:

for(int i=1; i<=10; i++)
{

printf("%d\n",i);
}
break;

case 2:

for(int i=1; i<=10; i++)
{

printf("%d\n",i*2);
}
break;

case 3:

for(int i=1; i<=10; i++)
{

printf("%d\n",i*3);
}
break;
case 4:

for(int i=1; i<=10; i++)
{
printf("%d\n",i*4);

}
break;

case 5:
    for(int i=1; i<=10; i++)
    {
    printf("%d\n",i*5);
    }
break;


default :
    printf("please try again");
}









}
