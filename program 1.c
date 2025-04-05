#include <stdio.h>
void main()
{
 int a;
 printf("enter any values");
 scanf("%d",&a);


 for(int i=0; i<=6; i++)
 {

 for(int j=0; j<=6; j++){

  switch(a){


case 1:
     printf("%c ",65+j);
      break;

case 2:
    printf("%d ",i);
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
