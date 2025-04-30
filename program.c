#include<stdio.h>
void main()
{
int a,b,c,d;
char k;

printf("enter char");
scanf("%c",&k);

switch(k){

case '+':
    a=10+20;
    printf("%d",a);
 break;

case '-':
    b=10-20;
    printf("%d",b);
    break;

case '*':
    c=30*5;
    printf("%d",c);
    break;

case '/':
    d=14/7;
    printf("%d",d);
    break;

default :
    printf("please try again");


}

}
