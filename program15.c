#include<stdio.h>
#include<math.h>
void main()
{
int c,cpp,java,python;
int totalMarks=400;

printf("Enter the c marks");
scanf("%d",&c);
//printf("%d",c);

printf("Enter the cpp marks");
scanf("%d",&cpp);
//printf("%d",cpp);

printf("Enter the java marks");
scanf("%d",&java);
//printf("%d",java);

printf("Enter the python marks");
scanf("%d",&python);
//printf("%d", python);

int sum=c+cpp+java+python;
printf("totalmarks=%d\n",sum);

int a=100/400;
 float percentage= (float)sum/totalMarks*100.0;
printf("%.2lf\n",percentage);

if(percentage>80)
{
    printf("Congratulation....");
    printf("Your grade is A+");
}
else if(percentage>70)
{
    printf("Congratulation....");
 printf("Your grade is A");
}
else if(percentage>60)
{
  printf("Congratulation....");
printf("Your grade is B+");
}
else if(percentage>35)
{
printf("Congratulation....");
printf("Your grade is B");
}
else
{
 printf("Sorry your fail...");
}


}
