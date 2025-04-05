#include<stdio.h>
void main()
{
int mark;
printf("enter the mark");
scanf("%d",&mark);

if(mark>80)
{
 printf("congratulation !!!! your grade is A+");
}
else if(mark>70)
{
  printf("congratulation !!!! your grade is A");
}
else if(mark>60)
{
 printf("congratulation !!!! your grade is B+");
}
else if(mark>50)
{
  printf("congratulation !!!! your grade is B");
}
else if(mark>40)
{
  printf("congratulation !!!! your grade is C+");
}
else if(mark>35)
{
 printf("congratulation !!!! your grade is C");
}
else
{
printf("fail");
}

}
